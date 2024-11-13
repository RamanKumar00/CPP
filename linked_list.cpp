#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor with data and next pointer
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with data only, next set to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

int main() {
    vector<int> arr = {2, 5, 7, 8};
    
    // Create a new node with the first element of the array
    Node* y = new Node(arr[0]);

    // Output the node's address and its data
    cout << y << "\n"; // prints the address of the node
    cout << y->data << "\n"; // prints the data of the node
    
    return 0;
}
