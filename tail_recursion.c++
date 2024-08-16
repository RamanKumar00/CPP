#include<iostream>
using namespace std;
int num(int n)
{
    if(n>0)
    {
        cout<<n;
    }
    num(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<"ans:"<<num(n);
    return 0;


}