#include<iostream>
using namespace std;
bool isSorted(int arr[],int size)
{
    if( size==0 || size==1)
    return true;
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        bool remaining=isSorted(arr+1,size-1);
        return remaining;
    }

}
int main()
{
    int arr[]={5,6,8,9,12,13};
    int size=sizeof arr/sizeof arr[0];
    cout<<"size of array is : "<<size<<endl;
    bool ans=isSorted(arr,size);
    if(ans)
    {
        cout<<"array is sorted";
    }
   else
    {
        cout<<"array is not sorted";
    }
    return 0;
}