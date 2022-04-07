#include<iostream>
using namespace std;
class Even_number{
    int x;
public:
    Even_number()
    {
        x=0;
    }
    Even_number(int a)
    {
        x=a;
    }
    int getValue();
    int getNext();
    int getPrevious();
};
int Even_number::getValue()
{
    return x;
}
int Even_number::getNext()
{
    return x+2;
}
int Even_number::getPrevious()
{
    return x-2;
}
int main()
{
    Even_number en(16);
    int current,next,previous;
    current=en.getValue();
    next=en.getNext();
    previous=en.getPrevious();
    cout<< "The next number is:"<<next<<endl<<"The previous number is:"<<previous<<endl;
}
