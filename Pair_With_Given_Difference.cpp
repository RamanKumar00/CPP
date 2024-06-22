#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,5,10,50,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"size of array is: "<<n<<endl;
    int target;
    cout<<"enter the target which you want to find: ";
    cin>>target;
    cout<<"value of target is: "<<target<<endl;
    int start=0;
    int end=start+1;
    bool found=false;
    while(end<n)
    {
        if(arr[end]-arr[start]==target)
        {
            cout << "Pair found: (" << arr[start] << ", " << arr[end] << ")" << endl;
            found=true;
            break;
        }
        else if(arr[end]-arr[start]<target)
        {
            end++;
        }
        else{
            start++;
        }
    }
     if (!found) {
        cout << "No pairs found that sum up to the target value." << endl;
    }
    return 0;
}