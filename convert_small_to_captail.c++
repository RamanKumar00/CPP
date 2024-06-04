#include<iostream>
using namespace std;
char upper(char name)
{
    char ans=name-32;
    return ans;
}

char lower(char name)
{
    char ans=name+32;
    return ans;
}

int main()
{
    // char name;
    // cin>>name;
   
    cout<<upper('g')<<endl;
    cout<<lower('A');
    return 0;
}