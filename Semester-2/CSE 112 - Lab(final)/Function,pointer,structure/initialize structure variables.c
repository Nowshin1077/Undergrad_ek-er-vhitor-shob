#include<stdio.h>
#include<stdio.h>

struct person
{
    int age;
    float salary;

};
int main()
{
    struct person person1={27,15550.7};//Local variable.
    struct person person2,person3;
    //element wise assignment.
    person2.age=25;
    person2.salary=353626.5;

    //structure variable assignment.

     person3=person2;

    printf("Person1:\n");
    printf("Age:%d\n",person1.age);
    printf("Salary:%f\n",person1.salary);


    printf("\n\nPerson2:\n");
    printf("Age:%d\n",person2.age);
    printf("Salary:%.2f\n",person2.salary);

    printf("\n\nPerson3:\n");
    printf("Age:%d\n",person3.age);
    printf("Salary:%.2f\n",person3.salary);

    getch();
    return 0;
}
