#include<iostream>
#include<cmath>
using namespace std;
int countDigit(int n)
{
    int count=0;
    while (n!=0)
    {
        count++;
        n=n/10;
    }
    return count;
}
bool armstrong(int num,int digit)
{
    int n=num,ans=0,rem;
    while(n)
    {
        rem=n%10;
        n=n/10;
        ans=ans + pow(rem,digit);
       

    }
     return ans==num;
}
int main()
{
    int num;
    cin>> num;
    int digit =countDigit(num);
    cout<<armstrong(num,digit);
    return 0;
}