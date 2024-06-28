#include <iostream>
using namespace std;
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
    bool checkpalindrome(char name[], int len)
{
    int start = 0;
    int end = len - 1;
    while (start <= end)
    {
        if (name[start] != name[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}
int main()
{
    char name[20];
    cout << "enter your string: " << endl;
    cin >> name;
    cout << "length of string is: " << getLength(name) << endl;
    int len = getLength(name);
    cout << "Palindrome Or Not: " << checkpalindrome(name, len);
    return 0;
}