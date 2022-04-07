#include <iostream>
using namespace std;

class building
{
    public:
    float length;
    float width;

    void set_length(int X);
    void set_width(int Y);
    void get_area(int Z);

    building(); /* Constructor */
    ~building(); /* Destructor */
};

int main()
{
    building B[2];

    for(int i=0; i<2; i++)
    {
        float X, Y;
        cout << "Enter the value of X: ";
        cin >> X;
        B[i].set_length(X);

        cout << "Enter the value of Y: ";
        cin >> Y;
        B[i].set_width(Y);

        B[i].get_area( B[i].length * B[i].width );
    }
    return 0;
}

void building:: set_length(int X)
{
    length = X;
}

void building:: set_width(int Y)
{
    width = Y;
}


void building:: get_area(int Z)
{
    cout << "Area of building is : " << Z<< endl<< endl;
}

building::building()
{
    length = 0.00;
    width = 0.00;
    static int i=0;
    cout << "Constructor["<< i <<"]" << endl;
    i++;
}

building::~building()
{
    static int i=0;
    cout << "Destructor["<< i <<"]" << endl;
    i++;
}
