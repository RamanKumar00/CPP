#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    // Dynamically allocate a 2D array
    int** arr = new int*[m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int count = 0;
    int total = m * n;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = m - 1;
    int endingCol = n - 1;

    cout << "Spiral order of the array elements:" << endl;
    while (count < total) {
        // Print top row
        for (int index = startingCol; index <= endingCol && count < total; index++) {
            cout << arr[startingRow][index] << " ";
            count++;
        }
        startingRow++;

        // Print right column
        for (int index = startingRow; index <= endingRow && count < total; index++) {
            cout << arr[index][endingCol] << " ";
            count++;
        }
        endingCol--;

        // Print bottom row
        for (int index = endingCol; index >= startingCol && count < total; index--) {
            cout << arr[endingRow][index] << " ";
            count++;
        }
        endingRow--;

        // Print left column
        for (int index = endingRow; index >= startingRow && count < total; index--) {
            cout << arr[index][startingCol] << " ";
            count++;
        }
        startingCol++;
    }

    // Deallocate the memory
    for (int i = 0; i < m; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
