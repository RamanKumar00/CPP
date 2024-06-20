// C++ program to demonstrate
// Implementation of clear() function
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myvector;
	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(3);
	myvector.push_back(4);
	myvector.push_back(5);

	// Vector becomes 1, 2, 3, 4, 5

	myvector.clear();
	// vector becomes empty

	// Printing the vector
	 for (int x :myvector)
        cout << x << " ";
	return 0;
}
