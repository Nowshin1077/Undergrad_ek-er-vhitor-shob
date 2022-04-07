#include<iostream>
using namespace std;
class MyDate{
public:
    int year,month,day;
    MyDate()
    {
        year=2019;
        month=5;
        day=13;
    }
    MyDate(long long a)
    {
        year=1970+((((a/60)/60)/24)/365.25);
        month=((((a/60)/60)/24)/365.25);
        int month1=month;
        month=(((((a/60)/60)/24)-(month*365.25))/30);
        float n=((((a/60)/60)/24)-(month1*365.25));
        switch(month)
        {
        case 1:
            day=n-31+1;
            break;
        case 2:
            day=n-59+1;
            break;
        case 3:
            day=n-90+1;
            break;
        case 4:
            day=n-120+1;
            break;
        case 5:
            day=n=151+1;
            break;
        case 6:
            day=n-181+1;
            break;
        case 7:
            day=n-212+1;
            break;
        case 8:
            day=n-243+1;
            break;
        case 9:
            day=n-273+1;
            break;
        case 10:
            day=n-304+1;
            break;
        case 11:
            day=n-334+1;
            break;
        case 0 :
            day=n+1;
        }
    }
    MyDate(int y,int m,int d)
    {
        year=y;
        month=m;
        day=d;
    }
    void setYear()
    {
        cout << "Enter year:";
        cin>>year;
    }
    void setMonth()
    {
        cout << "Enter Month:";
        cin >> month;
    }
    void setDay()
    {
        cout << "Enter Day:";
        cin >> day;
    }
    int getYear()
    {
        return year;
    }
    int getMonth()
    {
        return month;
    }
    int getDay()
    {
        return day;
    }
    void setDat(long long a)
    {
        year=1970+((((a/60)/60)/24)/365.25);
        month=((((a/60)/60)/24)/365.25);
        int month1=month;
        month=((((a/60)/60)/24)-(month*365.25)/30);
        int n=(((a/60)/60)/24)-(month1*365.25);
        switch(month)
        {
        case 1:
            day=n-31;
            break;
        case 2:
            day=n-59;
            break;
        case 3:
            day=n-90;
            break;
        case 4:
            day=n-120;
            break;
        case 5:
            day=n=151;
            break;
        case 6:
            day=n-181;
            break;
        case 7:
            day=n-212;
            break;
        case 8:
            day=n-243;
            break;
        case 9:
            day=n-273;
            break;
        case 10:
            day=n-304;
            break;
        case 11:
            day=n-334;
            break;
        case 0 :
            day=n;
        }
    }

};
int main()
{
    MyDate D1,D2(561555550);
    cout << D1.getYear()<<"/"<<D1.getMonth()<< "/"<<D1.getDay()<<endl;
    cout << D2.getYear()<<"/"<<D2.getMonth()<< "/"<<D2.getDay()<<endl;

}
