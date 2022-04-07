#include<iostream>

using namespace std;

class student
{
public:
    int roll;
    int mark;

};

class result:public student
{
public:
    void get()
    {
        cin>>roll;
    }
    void print(  )
    {
        cout<<mark<<" "<<roll<<endl;
    }
};

/**int main()/// (1)
{
Student ob;
ob.mark = 75;
ob.roll = 1;

cout<<ob.mark<<" "<<ob.roll<<endl;
return 0;
} **/
int main()
{
result ob;
ob.mark = 74;
ob.roll = 2;

cout<<ob.mark<<" "<<ob.roll<<endl;
return 0;
}
