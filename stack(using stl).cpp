#include<iostream>
#include<stack>
using namespace std;

int main()
{
    //creation of stack

    stack <int> s;

    //push operation
    s.push(2);
    s.push(3);

    //pop operation
    s.pop();

    cout<<"top element in stack:"<< s.top()<<endl;

    if(s.empty())
    {
        cout<<"stack is empty";
    }
    else{
        cout<<" stack is not empty";
    }

   return 0;
}
