#include<iostream>
using namespace std;

class student
{
    string name;
    long long id;
    double cgpa;
    string course_name;
public:
    double get_info();
    void set_info();
    void set_info(student);
    void show_info();

    student();
    student(string, long long, double, string);
    ~student();
};

void student::set_info()
{
    cout << "Enter Student name: ";
    cin >> name;
    cout << "Enter Student ID: ";
    cin >> id;
    cout << "Enter CGPA: ";
    cin >> cgpa;
    cout << "Enter course name: ";
    cin >> course_name;

}

void student::set_info(student O)
{
    cout << "Name   : " << name << endl;
    cout << "ID     : " << id << endl;
    cout << "CGPA   : " << cgpa << endl;
    cout << "Course : " << course_name << endl;
    cout << endl;
    cout << endl;
    //cout << endl;
}

void student::show_info()
{
    cout << "\n\nName   : " << name << endl;
    cout << "ID     : " << id << endl;
    cout << "CGPA   : " << cgpa << endl;
    cout << "Course : " << course_name << endl;
    cout << endl;
    cout << endl;
}

student::student()
{
        name ='\0';
        id = 00000000000;
        cgpa = 0.00;
        course_name = '\0';
}

student::student(string W, long long X, double Y, string Z)
{
        name = W;
        id = X;
        cgpa = Y;
        course_name = Z;
}

student::~student()
{
    cout << "This is destructor!!!\n";
    cout << endl;
}

int main()
{
    student s1("Soha", 171836103004, 3.00, "Bsc. Engg. in CSE"), s2;
    s1.set_info(s1);
    s2.set_info();
    s2.set_info(s2);
    return 0;
}
