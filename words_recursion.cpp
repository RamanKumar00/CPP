#include<iostream>
using namespace std;
void word(int n,string arr[])
{
    if (n==0)
    return  ;
    word(n/10,arr);
    cout<<arr[n%10]<<" ";

}
int main()
{
   string arr[10] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin>>n;
    word(n,arr);
    return 0;
}