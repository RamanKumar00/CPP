#include <iostream>
using namespace std;
void reverse(string &str)
{
    int n = str.length();
    for (int i = 0; i <n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
}
int main()
{
    string str = "Ram";
    reverse(str);
    cout << str;
    return 0;
}