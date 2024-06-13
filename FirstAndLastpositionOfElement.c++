#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {2, 3, 3, 3, 6, 7, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    int target;
    cout << "enter the value of target: ";
    cin >> target;
    int start = 0, end = n - 1, mid, last = -1, first = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        { 
            end = mid - 1;
        }
    }
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (first != -1)
    {
        cout << "First occurrence of " << target << " is at index: " << first << endl;
        cout << "Last occurrence of " << target << " is at index: " << last << endl;
    }
    else
    {
        cout << target << " not found in the array." << endl;
    }

    return 0;
}