#include<stdio.h>

struct person
{
    int age;
    float salary;

};
int main()
{
    struct person person1,person2;

    person1.age=27;
    person1.salary=12637.8;
    printf("Person1:\n");
    printf("Age:%d\n",person1.age);
    printf("Salary:%f\n",person1.salary);


    person2.age=24;
    person2.salary=10637.8;
    printf("\n\nPerson2:\n");
    printf("Age:%d\n",person2.age);
    printf("Salary:%.2f\n",person2.salary);

    getch();
    return 0;
}
