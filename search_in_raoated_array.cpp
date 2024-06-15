#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "value of n is: " << n << endl;
    int start = 0;
    int end = n - 1;
    int mid;
    int target;
    cout << "enter the element want to find: ";
    cin >> target;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            cout << "target found at index: " << mid << endl;
            return 0;
        }

        // Determine which part is sorted
        if (arr[start] <= arr[mid])
        {
            // Left part is sorted
            if (arr[start] <= target && target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            // Right part is sorted
            if (arr[mid] < target && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    cout << "target not found" << endl;
    return 0;
}
