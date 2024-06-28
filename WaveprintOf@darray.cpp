#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    // Input matrix column-wise
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            cin >> arr[i][j];
        }
    }

    // Output matrix with specific formatting
    for (int j = 0; j < 3; j++) {
        if (j % 2 == 1) {  // Odd column index
            for (int i = 2; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        } else {  // Even column index
            for (int i = 0; i < 3; i++) {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
