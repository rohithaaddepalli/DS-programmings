#include <stdio.h>
#include<string.h>
struct Employee
{
    int Id;
    char Name[10];
    float Salary;
} E1 = {5438, "Murthy", 5400.10}, E2;

int main()
{
    struct Employee E3 = {4882, "Swathi", 4500.10}, E4;

    E2.Id = 5432;
    strcpy(E2.Name, "Raju");
    E2.Salary = 5200.12;

    printf("Enter E4 Id");
    scanf("%d", &E4.Id);

    printf("Enter E4 Name");
    scanf("%s", E4.Name);

    printf("Enter E4 Salary");
    scanf("%f", &E4.Salary);

    printf("Employee details are:\n");

    printf("\n %d %s %f", E1.Id, E1.Name, E1.Salary);
    printf("\n %d %s %f", E2.Id, E2.Name, E2.Salary);
    printf("\n %d %s %f", E3.Id, E3.Name, E3.Salary);
    printf("\n %d %s %f", E4.Id, E4.Name, E4.Salary);

    return 0;
}
