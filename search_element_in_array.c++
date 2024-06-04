#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,9,13,43,1};
    int x;
    cin>>x;
    int index=-1;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==x)
        {
            index=i;
            break;
        }
    }
    cout<<index;
    return 0;
}