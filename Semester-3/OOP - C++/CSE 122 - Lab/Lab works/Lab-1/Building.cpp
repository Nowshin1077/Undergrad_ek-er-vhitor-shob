#include <iostream>
using namespace std;

class building
{
    float length;
    float width;
public:
    void set_length();
    void set_width();
    void get_area();
};

int main()
{
    building B[2];

    for(int i=0; i<2; i++)
    {
        B[i].set_length();
        B[i].set_width();
        B[i].get_area();
    }
    return 0;
}

void building:: set_length()
{
    static int i=0;
    cout << "Enter length of B[" << i << "] building :";
    cin >> length;
    i++;
}
void building:: set_width()
{
    static int i=0;
    cout << "Enter width of B[" << i << "] building :" ;
    cin >> width;
    i++;
}
void building:: get_area()
{
    double area;
    area = length * width;
    static int i=0;
    cout << "Area of B[" << i << "] building is : " << area<< endl<< endl;
    i++;

}
