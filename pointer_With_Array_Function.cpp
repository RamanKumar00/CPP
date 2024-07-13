#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<sizeof(arr) <<endl;
    cout<<sizeof(*arr) <<endl;
    cout<<sizeof(&arr) <<endl; //this give 4 bytes because the downloaded system is of 32 bits but for 64 bits it gives 8 .

    int *ptr = &arr[0];
    cout << sizeof(ptr) <<endl; // same reason here
    cout << sizeof(*ptr) <<endl;
    cout << sizeof(&ptr) <<endl; // for here the reason is same 


    return 0;
}