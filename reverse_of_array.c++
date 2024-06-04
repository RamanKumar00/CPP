#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5},b[5]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"size of array:"<<n<<endl;
    int c;
    for(int i=0;i<=n-1;i++)
    {
     c=b[i];
    b[i]=a[i];
    a[i]=c;
   
    }
     cout<<"a after swap: ";
    for(int i=0;i<=n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
     cout<<"b after swap: ";
     for(int i=0;i<=n-1;i++)
    {
        cout<<b[i]<<" ";
    }

    return 0;
}