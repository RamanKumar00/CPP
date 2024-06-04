#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5]={2,5,6,7,3};
    int ans=INT_MIN;
    cout<<ans;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
        }
    }
    cout<<"maximum element of array is: "<<ans;
    return 0;
}