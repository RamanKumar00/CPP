#include<iostream>
using namespace std;
int num(int n)
{
    if(n>0)
    {
        num(n-1);
        cout<<n<<" ";
        
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<"ans:"<<num(n);
    return 0;
}