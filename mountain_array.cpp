#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 5, 7, 8, 10, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "the value of n is: " << n << endl;
    int start = 0;
    int end = n - 1;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if ((mid == 0 || arr[mid] > arr[mid - 1]) && (mid == n - 1 || arr[mid] > arr[mid + 1]))
        {
            cout << "the peak element of array is at:" << mid;
            break;
        }

        else if (mid > 0 && arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return 0;
}