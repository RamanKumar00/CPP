#include <iostream>
#include <vector>

using namespace std;

// Function to check if it's possible to allocate books
bool isPossible(vector<int>& arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int main() {
    vector<int> arr{10, 20, 30, 40};
    int n = arr.size();
    cout << "Size of array is: " << n << endl;

    int m;
    cout << "Enter the number of students: ";
    cin >> m;

    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    cout << "Minimum possible maximum page allocation is: " << ans << endl;
    return 0;
}
