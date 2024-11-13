#include<iostream>
using namespace std;
int expo(int a , int b )
{
    if(b==0)
    return 1;

    if(b==1)
    {
        return a;
    }

    
     int ans=expo(a , b/2 );
    

    if (b%2==0)
    return ans*ans;

    if(b%2!=0)
    {
        return a*ans*ans;
    }

    
}
int main()
{
    int a,b,ans;
    cin >>a>>b;
    int find = expo(a,b);
    cout<<find;
    return 0;
}
