#include <iostream>
using namespace std;


void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


int partition(int arr[], int Start, int End) {
    int pivot = arr[End];  
    int i = Start;

    
    for (int j = Start; j < End; j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    
    swap(arr[i], arr[End]);
    return i; 
}


int Smallest(int arr[], int left, int right, int k) {
    if (left <= right) {
        int pivotIndex = partition(arr, left, right); 

       
        if (pivotIndex == k - 1) {
            return arr[pivotIndex];
        }
        
        else if (pivotIndex > k - 1) {
            return Smallest(arr, left, pivotIndex - 1, k);
        }
        
        else {
            return Smallest(arr, pivotIndex + 1, right, k);
        }
    }
    return -1; 
}

int main() 
{
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]);  
    int k;  
    cout << "Enter the value of k to find the k-th smallest element: ";
    cin >> k;

    
    if (k > 0 && k <= n) {
        cout << "The array is: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";  
        }
        cout << endl;

       
        int result = Smallest(arr, 0, n - 1, k);
        cout << "The " << k << "-th smallest element is: " << result << endl;
    } else {
        cout << "Invalid input. k should be between 1 and " << n << "." << endl;
    }

    return 0;
}
