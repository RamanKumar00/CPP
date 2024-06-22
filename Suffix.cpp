#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[6] = {6, 4, 5, -3, 2, 8};
    int n;
    cout << "enter the size of vector: ";
    cin >> n;
    vector<int> suffix(n);
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i+1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << suffix[i] << " ";
    }
    return 0;
}