#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <set>
#include <sstream>

using namespace std;

// List of common stopwords
set<string> stopwords = {"a", "an", "and", "the", "is", "in", "at", "of", "on", "this", "that", "for", "to", "just"};

int main() {
    string filename = "example.txt"; // File to read
    ifstream file(filename); // Open the file

    if (!file) {
        cerr << "Error opening file: " << filename << endl;
        return 1; // Exit if file can't be opened
    }

    map<string, int> wordCount;
    string word, line;

    while (getline(file, line)) { 
        stringstream ss(line);
        while (ss >> word) { // Read word by word
            if (stopwords.find(word) == stopwords.end()) { // Exclude stopwords
                wordCount[word]++;
            }
        }
        cout << line << endl; // Print each line
    }

    file.close(); // Close the file

    // Find the most common word
    string mostCommonWord;
    int maxCount = 0;
    for (const auto &pair : wordCount) {
        if (pair.second > maxCount) {
            mostCommonWord = pair.first;
            maxCount = pair.second;
        }
    }

    cout << "Most common word (excluding stopwords): " << mostCommonWord << " (" << maxCount << " times)" << endl;

    return 0;
}
