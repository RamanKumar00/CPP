#include<iostream>
#include<algorithm>
using namespace std;

int findMinElement(int arr[], int size, int &minIndex) {
    int minElement = arr[0];
    minIndex = 0; 
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
            minIndex = i; 
        }
    }
    return minElement;
}

int main() {
    int arr[] = {5, 8, 2, 1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int minIndex;

    
    int minElement = findMinElement(arr, size, minIndex);
    cout << "Minimum Element: " << minElement << " at index " << minIndex << endl;

    
    sort(arr, arr + size);

   
    cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
