#include<iostream>
using namespace std;

class CSE
{
    int number_faculty;
    double total_year;
    char code;
public:
    CSE();
    CSE(int, double, char);
    void setvalue();
    void setvalue(int, double, char);
    void display();
    ~CSE();
};

CSE::CSE()
{
    number_faculty = 0;
    total_year = 0.00;
    code = '\0';
}
CSE::~CSE(){}

CSE::CSE(int X, double Y, char Z)
{
    number_faculty = X;
    total_year = Y;
    code = Z;
}

void CSE::setvalue()
{
    cout << "Enter number of faculties: ";
    cin >> number_faculty;
    cout << "Enter total years: ";
    cin >> total_year;
    cout << "Enter Identity code: ";
    cin >> code;
}

void CSE::setvalue(int X, double Y, char Z)
{
    cout << "Enter number of faculties: ";
    cin >> number_faculty;
    number_faculty=X+number_faculty;

    cout << "Enter total years: ";
    cin >> total_year;
    total_year=Y+total_year;

    cout << "Enter Identity code: ";
    cin >> code;
    code= Z+code;
}
void CSE::display()
{
    cout << "Number of faculty: " << number_faculty << endl;
    cout << "Total years      : " << total_year << endl;
    cout << "Identity code    : " << code << endl;
}


int main()
{
    CSE c1, c2;
    c1.setvalue();
    c2.setvalue(10, 10.00, 'B');
    c1.display();
    c2.display();
}
#include<iostream>
using namespace std;

class CSE
{
    int number_faculty;
    double total_year;
    char code;
public:
    CSE();
    CSE(int, double, char);
    void setvalue();
    void setvalue(int, double, char);
    void display();
    ~CSE();
};

CSE::CSE()
{
    number_faculty = 0;
    total_year = 0.00;
    code = '\0';
}
CSE::~CSE(){}

CSE::CSE(int X, double Y, char Z)
{
    number_faculty = X;
    total_year = Y;
    code = Z;
}

void CSE::setvalue()
{
    cout << "Enter number of faculties: ";
    cin >> number_faculty;
    cout << "Enter total years: ";
    cin >> total_year;
    cout << "Enter Identity code: ";
    cin >> code;
}

void CSE::setvalue(int X, double Y, char Z)
{
    cout << "Enter number of faculties: ";
    cin >> number_faculty;
    number_faculty=X+number_faculty;

    cout << "Enter total years: ";
    cin >> total_year;
    total_year=Y+total_year;

    cout << "Enter Identity code: ";
    cin >> code;
    code= Z+code;
}
void CSE::display()
{
    cout << "Number of faculty: " << number_faculty << endl;
    cout << "Total years      : " << total_year << endl;
    cout << "Identity code    : " << code << endl;
}


int main()
{
    CSE c1, c2;
    c1.setvalue();
    c2.setvalue(10, 10.00, 'B');
    c1.display();
    c2.display();
}

