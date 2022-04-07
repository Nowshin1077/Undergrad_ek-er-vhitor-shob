//Prompts the user to take string,int,float value.
#include<iostream>
using namespace std;

int main()
{
    int i;
    float f;
    char s[80];
    cout<<"Enter an integer,float and string :  ";
    cin>>i>>f>>s;
    cout<<"\nHere's your data:"<<endl;
    cout<<i<<' '<<f<<' '<<s;

    return 0;
}
