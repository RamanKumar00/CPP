#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5];
    cout<<"enter the element of array: ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        
    }
    int ans=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if (arr[i]>ans)
        {
            ans=arr[i];
        }
        
    }
    int second=INT_MIN;
    for (int i = 0; i < 5; i++)
    {
       if (arr[i]!=ans)
       {
        second=max(second,arr[i]);
       }
      
       
    }
   
    cout<<"2nd highest_element_of_array: "<<second;
    


}