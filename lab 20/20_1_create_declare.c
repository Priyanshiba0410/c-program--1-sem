#include <stdio.h>
struct Employee 
{
    int employeeId;
    char name[50];
    float salary;
};
void main() 
{
    struct Employee emp1;
    emp1.employeeId = 101;
    strcpy(emp1.name, "vidisha bhagiya");
    emp1.salary = 5000000.0;
    printf("Employee ID: %d\n", emp1.employeeId);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %f\n", emp1.salary);
}
