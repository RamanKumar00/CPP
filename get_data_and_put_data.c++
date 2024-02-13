#include<iostream>
using namespace std;
class Console
{
    private:
    string name;
    int salary;
    int mobile_number;
    public:
    string address;

    string getname()
    {
        return name;
    }
    int getsalary(){
        return salary;
    }
    int getmobilenumber(){
        return mobile_number;
    }
   
};
int main()
{
    Console Back;
    cout<<"enter the name: "<<endl;
    cin>>Back.name<<endl;
    cout<<"name is: "<<Back.getname();
   

    return 0;
}