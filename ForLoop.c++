#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        cout<<"outer loop\n";
        for (int j = 0; j < 5; j++)
        {
            cout<<j;
        }
        cout<<"\n";
        
    }
    
    
    return 0;
}
