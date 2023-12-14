#include <stdio.h>
struct student 
{
    int name[100];
    float persantage[100];
    int age[100];
};
void main() 
{
    struct student student[5];
    for (int i = 0; i < 5; i++) 
    {
        printf("student name: ");
        scanf("%s", student[i].name);
        printf("persantage: ");
        scanf("%s", student[i].persantage);
        printf("age: ");
        scanf("%s", student[i].age);
    }
    printf("student Information:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("name: %s\n", student[i].name);
        printf("persantage: %s\n", student[i].persantage);
        printf("age: %s\n", student[i].age);
    }
}
