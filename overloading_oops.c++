#include<iostream>
using namespace std;

class space 
{
    int x,y,z;
    public:
    void getdata(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;

    }
    void display (void)
    {
        cout<<x<<y<<z;
    }
    void operator - (void);
};
void space :: operator - (void)
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    space s;
    s.getdata(-2, 4,-5);
    -s;
    s.display();
}
 
