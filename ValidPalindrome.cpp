#include<iostream>
using namespace std;
bool valid(char ch)
{
    if((ch>='a' && ch<='z' || ch>='A' && ch<='z' || ch>='0' && ch<='9' ))
    {
        return 1;
    }
    else{
        return 0;
    }
}
bool ispalindrome(string s)
{
    string temp=" ";
    for(int j=0;j<s.length();j++)
    {
        if(valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }
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

    
    return 0;
}