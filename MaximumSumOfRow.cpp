#include <iostream>
#include <climits>
using namespace std;
int maximumSum(int arr[][3], int m, int n)
{
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i;
        }

        cout << endl;
    }
    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
}
int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = maximumSum(arr, 3, 3);
    cout << ans;
    return 0;
}