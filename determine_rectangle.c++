#include<iostream>
using namespace std;
int main()
{
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    if(A==B&&C==D||A==C&&B==D||A==D&&B==C)
    {
        cout<<"it can be a rectangle";
    }
    else {
        cout<<"sides are not matched";
    }
    return 0;
}
