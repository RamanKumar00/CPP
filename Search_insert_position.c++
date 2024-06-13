#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[]={1,2,4,5,7,11,13};
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"value of n is:"<<n;
    int target;
    cout<<endl;
    cout<<"enter the value of target: ";
    cin>>target;
    int start=0,end=n-1,mid,ans=n;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            break;
        }
        else if(arr[mid]<target)
        {
            start=mid+1;

        }
        else{
            ans=mid;
            end=mid-1;
        }
    }
    cout<< ans;
    return 0;
}