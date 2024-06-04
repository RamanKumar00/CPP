#include<iostream>
using namespace std;
int find(int n)
{
    int count=0;
    
    while(n>=5)
    {
    
    count=count +n/5;
    n=n/5;
   
    }
     return count;
}


int main()
{
    int num;
    cin>>num;
    cout<<find(num);
}