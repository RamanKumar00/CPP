#include <iostream>
using namespace std;
int main()
{
    int x;
    int ans = 0;
    int start = 1;
    int mid;
    int end;
    cout << "enter the value of x: ";
    cin >> x;
    end = x;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid * mid == x)
        {
            ans = mid;
            break;
        }
        else if (mid * mid < x)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end= mid - 1;
        }
    } 
    cout << "the probable sqrt of " << x << " is:" << ans;
    return 0;
}