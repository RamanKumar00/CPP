#include <iostream>
using namespace std;
void sum(int arr[], int target, int n)
{
    bool found = false;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        j=i+1;
        if (arr[i] + arr[j] == target)
        {
            cout << i << " ," << j;
            found = true;
        }
        else{
            j++;
        }
    }
    if (found == false)
    {
        cout << "pair not found";
    }
}
int main()
{
    int arr[5] = {3, 5, 7, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "value of n: " << n << endl;
    int target;
    cout << "enter the value in target:";
    cin >> target;
    sum(arr, target, n);

    return 0;
}