#include <iostream>
#include <cstring>
using namespace std;
void reverse(char name[], int len)
{
    for (int i = len - 1; i >= 0; i--)
    {
        cout << name[i];
    }
    cout << endl;
}
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "enter your name: " << endl;
    cin >> name;
    cout << "your name is " << name << endl;
    int len = getLength(name);
    cout << "length of string is: " << getLength(name);
    cout << "reverse string is: ";
    reverse(name, len);

    return 0;
}