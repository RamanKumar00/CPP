#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    void getdata();
    void putdata();

};
void demo:: getdata()
{
    cout<<"enter two number: ";
    cin>>a>>b;
}
void demo :: putdata()
{
    if(a>b)
    {
        cout<<"maximum is: "<<a; 
        cout<<"minimum is: "<<b;
    }
    else
    {
        cout<<"maximum is: "<<b<<endl;
         cout<<"minimum is: "<<a; 
    }
    
   
}
int main ()
{
    demo num;
    num.getdata();
    num.putdata();
    return 0;
}
