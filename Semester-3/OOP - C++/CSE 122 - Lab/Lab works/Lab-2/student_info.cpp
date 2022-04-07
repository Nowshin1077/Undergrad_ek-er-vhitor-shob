#include <iostream>
using namespace std;

class student
{
    double cgpa;
public:
    string name;
    long long id;
    //student get_cgpa(student);
    double get_cgpa();
    void show_info();
    student();
    student(double , string , long long );
    ~student();
};

//student::get_cgpa(student)
//{
//
//}

inline double student::get_cgpa()
{
    cout << "Enter CGPA: ";
    cin >> cgpa;
    return cgpa;
}

void student::show_info()
{
    static int i = 1;
    cout << "Name of s" << i <<" :  "<< name << endl;
    cout << "ID of s" << i <<" :  "<< id << endl;
    cout << "CGPA of s" << i <<" :  "<< cgpa<< endl;
    i++;
}

student::student()
{
    name='\0';
     cgpa = 0.00;
    id = 0;
}

student::student(double x, string y, long long z)
{
    cgpa =  x;
    name = y;
    id = z;
}

student::~student()
{
    cout << "This is destructor" << endl;
}

int main()
{
    student s1, s2(4.00, "Sabbir Ahmed", 17183103004);
//    cout << "Enter value for X(x = cgpa): ";
//    cin >> X;
//    cout << "Enter value for y(y = name): ";
//    cin >> Y;
//    cout << "Enter value for z(z = id): ";
//    cin >> Z;
    cout << "This is CGPA of s1: "<< s1.get_cgpa() << endl;
    cout << "This is CGPA of s2: "<< s2.get_cgpa() << endl;

    s1.show_info();
    s2.show_info();



    return 0;
}

#include <iostream>
using namespace std;

class student
{
    double cgpa;
public:
    string name;
    long long id;
    //student get_cgpa(student);
    double get_cgpa();
    void show_info();
    student();
    student(double , string , long long );
    ~student();
};

//student::get_cgpa(student)
//{
//
//}

inline double student::get_cgpa()
{
    cout << "Enter CGPA: ";
    cin >> cgpa;
    return cgpa;
}

void student::show_info()
{
    static int i = 1;
    cout << "Name of s" << i <<" :  "<< name << endl;
    cout << "ID of s" << i <<" :  "<< id << endl;
    cout << "CGPA of s" << i <<" :  "<< cgpa<< endl;
    i++;
}

student::student()
{
    name='\0';
     cgpa = 0.00;
    id = 0;
}

student::student(double x, string y, long long z)
{
    cgpa =  x;
    name = y;
    id = z;
}

student::~student()
{
    cout << "This is destructor" << endl;
}

int main()
{
    student s1, s2(4.00, "Nowshin Ibnat", 17183103004);
//    cout << "Enter value for X(x = cgpa): ";
//    cin >> X;
//    cout << "Enter value for y(y = name): ";
//    cin >> Y;
//    cout << "Enter value for z(z = id): ";
//    cin >> Z;
    cout << "This is CGPA of s1: "<< s1.get_cgpa() << endl;
    cout << "This is CGPA of s2: "<< s2.get_cgpa() << endl;

    s1.show_info();
    s2.show_info();



    return 0;
}
