#include <iostream>
using namespace std;

class employee
{

    int salary;
public:
    string name;
    int hours;
    int wage;
    employee();
    employee(string, int , int );
    void set_value();
    friend int cal_salary(employee , int , int );
    int get_salary(int , int);
};


employee::employee(void)
{
    name = '\0';
    hours = 0;
    wage = 0;
    salary = 0;
}


employee::employee(string X, int Y, int Z)
{
    name = X;
    hours = Y;
    wage = Z;
}

void employee::set_value(void)
{
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter wage: ";
    cin >> wage;

}

int  cal_salary(employee ob, int X, int Y)
{
    int res;
    ob.get_salary(X, Y);
    return res;
}


inline int employee::get_salary(int a, int b)
{
    return salary= a*b;
}

int main()
{
    employee person[3], worker("John Doe", 35, 200);



    for(int i=0; i<3; i++)
    {
        person[i].set_value();
        cal_salary(person[i],person[i].wage, person[i].hours);
    }

    for(int i=0; i<3; i++)
    {
        cout << "Name: " << person[i].name << endl ;
        cout << "Hour: " << person[i].hours << endl ;
        cout << "Wage: " << person[i].wage << endl ;
        cout << "Salary: " << person[i].get_salary(person[i].hours, person[i].wage) << endl << endl;
    }


    cout << worker.name<<endl;
    cout << worker.wage<<endl;
    cout << worker.hours<<endl;
    cout << worker.get_salary(worker.hours, worker.wage)<<endl;


    return 0;

}
