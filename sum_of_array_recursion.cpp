#include<iostream>
using namespace std;
int getsum(int arr[],int size)
{
    if(size==0)
    return 0;
    if (size==1)
    {
    return arr[0];
    }
    int remainingPart=getsum(arr+1,size-1);
    int sum=arr[0]+remainingPart;
    return sum; 

}
int main()
{
    int arr[]={4,7,5,1,2,9,10};
    int size=sizeof arr/sizeof arr[0];
    cout<<"size od array is : "<<endl;
    int sum= getsum(arr,size);
    cout<<sum;
    return 0;
}