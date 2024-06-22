#include<iostream>
using namespace std;
int  main()
{
    int arr[6]={1,3,5,6,1,7};
    int ans=0;
    for(int i=0;i<6;i++)
    {
        ans=ans^arr[i];
    }
     for(int i=1;i<6;i++)
    {
        ans=ans^i;
    }
    cout<<ans;

    return 0;
}
