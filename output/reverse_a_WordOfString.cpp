#include <iostream>
#include <string>
using namespace std;
int * sum(int arr[],int target, int size)
{
   static int r[2];
    for(int i = 0; i <= size; i++){
        for(int j = i+1; j< size ; j++)
        {
            if(arr[i] + arr [j] == target)
            {
               r[0] = i;
               r[1] = j;
            }
        }
     }
     return r;
     
}
   int main()
{
   int arr[]={1,2,3,5,6};
   int target = 5;
   int size = sizeof(arr)/sizeof (arr[1]);
   cout<<size;
   cout<<endl;
   int * result = sum(arr,target,size);
   cout<< result[0]<<","<<result[1];
   return 0;
}