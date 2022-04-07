//The effect of line-buffered input.
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter keys, X to stop.\n";
    do
    {
        cout<<":";
        cin>>ch;
    }
    while (ch!='x');
    return 0;
}
