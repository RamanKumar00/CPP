#include<iostream>
using namespace std;
int sum(int n1,int n2)
{
    int c=0;
    c=n1+n2;
    return c;

}
void fun()
{
    cout<<"hello fuction";
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);
    fun();
    return 0;
}