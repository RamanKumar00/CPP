#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1, 2, 6, 3, 7, -2, 4, -2};
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
    cout << "size of array is: " << n<<endl;
    int sum = 0;
    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        maxi = max(sum, maxi);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << "the maximum sum of sub array  is: " << maxi;
    return 0;
}