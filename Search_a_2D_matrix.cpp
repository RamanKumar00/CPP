#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    // Dynamically allocate a 2D array
    int **arr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
    }

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int start = 0;
    int end = m * n - 1;
    int target;
    cout << "enter the element to found: ";
    cin >> target;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int element = arr[mid / n][mid % n];
        if (element == target)
        {
            cout << "Element found at (" << mid / n << ", " << mid % n << ")\n";
            return 0;
        }
        else if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "element not found";
    return 0;
}