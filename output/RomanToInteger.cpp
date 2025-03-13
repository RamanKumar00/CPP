#include<iostream>
using namespace std;
int main()
{
    string r ;
    cout<<"enter your roman number: ";
    cin>>r;
    string I = "1";
    string V = "5";
    string X = "10";
    string L = "50";
    string C = "100";
    string D = "500";
    string M = "1000";

    if(r==I)
    {
       cout<<I;
    }
    else{
        for(int i= 0; i<= r.length() ;i++){
            cout<<"length of string: "<<r.length()<<"\n";
            
        }
    }



    


    return 0;
}