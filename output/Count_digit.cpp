#include<iostream>
using namespace std;
int main()
{
    int num = 336;
    string Num = to_string(num);  // yai integer se string mai convert karai ga 
    int count = 0;

    for (int i=0; i<Num.length() ;i++)
    {
        int digit = Num[i] - '0'; // yai character ko digit mai convert karai ga 

        if(digit != 0 && num % digit == 0){
            count ++;
        }
    }
    cout<<"total digit which divide num: "<<count;
    return 0;
}