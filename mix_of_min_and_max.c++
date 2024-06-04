#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    cin>>arr[i];
    int ans=INT_MAX;
    for(int i=0;i<5;i++)
    {
    if(arr[i]<ans)
    {
        ans=arr[i];
    }
    }
    
    cout<<"minimum element of array is: "<<ans<<endl;
    int min=-1;
    for(int i=0;i<5;i++){
    if(arr[i]>min)
    {
        min=arr[i];
    }
    }
    
     cout<<"maximum element of array is: "<<min;
     return 0;
}