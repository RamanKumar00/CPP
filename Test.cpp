#include<iostream>
#include "arrInput.h"
using namespace std;
int main()
{
   
    //int arr[5]={1,2,3,4,5};
    cout<<"Iam testing this code with git hub"<<endl;
     vector<int>vec=arrIn();
   // arrIn();
    //cout<<arr;
    for(size_t i=0 ; i < vec.size() ; i++)
    {
        cout<<vec[i];
    }
    return 0;
}