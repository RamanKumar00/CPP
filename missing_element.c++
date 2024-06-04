#include <iostream>
using namespace std;
int main()
{   int arr[6]={1,3,4,5,6};
    int sum=0;
    for (int i = 0; i < 6; i++)
    {
       sum=sum+arr[i];
    }
    int n=6;
     int ans=n*(n+1)/2;
     ans=ans-sum;
     cout<<"the missing number is :"<<ans;


    return 0;
}