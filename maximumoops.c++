#include<iostream>
using namespace std;
class demo
{
    private:
    int a,b;
    public:
    void getdata()
    {
        cout<<"enter the two number: ";
        cin>>a>>b;
    }
    void putdata()
    {
        if(a>b)
        {
            cout<<"maximum is : "<<a<<endl;
            cout<<"minimum is : "<<b<<endl;
        }
        else{
           cout<<"maximum is : "<<b<<endl;
            cout<<"minimum is : "<<a<<endl;
        }
    }


};
int main()
{
    demo n;
    n.getdata();
    n.putdata();
    return 0;
}