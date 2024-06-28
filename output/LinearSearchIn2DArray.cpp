#include<iostream>
using namespace std;
bool isPresent(int arr[][4], int target,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    int target;
    cout<<"enter the element to find: ";
    cin>>target;
    if(isPresent(arr,target,3,4))
    {
        cout<< "target found" <<endl;
    }
    else{
        cout<<"target not found" <<endl;

    }
    return 0;
}