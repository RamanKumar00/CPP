#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 6, 8, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "size of array is: " << n << endl;
    int start = 0;
    int end = n - 1;
    int mid;
    int ans;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    cout << "minimum element in rotate array is at index: " << ans << " " << "and the element is: " << arr[ans];
    return 0;
}