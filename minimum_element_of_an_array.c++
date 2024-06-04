#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5]={2,4,6,8,1};
    int ans=INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<ans)
        {
            ans=arr[i];
        }
    }
    cout<<"minimum element of array is:"<<ans;
    return 0;

}