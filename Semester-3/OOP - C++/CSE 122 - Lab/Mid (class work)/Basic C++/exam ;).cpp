#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter 'until you die' to stop.\n";
    do
    {
        cout<<":";
        cin>>ch;
    }
    while (ch!='x');
    return 0;
}
