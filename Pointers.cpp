#include<iostream>
using namespace std;
int main()
{
    int num=5;
    cout<<num<<endl;
    cout<<"address of num is "<<&num <<endl;;
    int *ptr=&num;
    cout<<*ptr <<endl;
    cout<<ptr <<endl;
    int *t=ptr;
    cout<<*t;

    return 0;

}