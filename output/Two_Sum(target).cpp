#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15, 27};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of array is: " << n << endl;

    int target;
    cout << "Enter target value: ";
    cin >> target;
    cout << "Value of target is: " << target << endl;

    bool found = false; 
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No pairs found that sum up to the target value." << endl;
    }

    return 0;
}
