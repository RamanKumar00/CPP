#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of array is: " << n << endl;
    
    int key;
    cout << "Enter the element to search: ";
    cin >> key;
    
    bool found = false;
    
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            cout << "Element is present" << endl;
            found = true; 
            break;
        }
    }
    
    if (found!=true)
    {
        cout << "Element not found" << endl;
    }
    
    return 0;
}
