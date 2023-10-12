#include <stdio.h>
int main()
{
    char id[10];
    int hr;
    double value, salary;
    printf("Employees ID: ");
    scanf("\n%s", &id);
    printf("\nInput the working hrs: ");
    scanf("%d", &hr);
    printf("Salary amount/hr: ");
    scanf("%lf", &value);
    salary = value * hr;
    printf("\nEmployees ID = %s\nSalary = Rs: %.2lf\n", id, salary);
    return 0;
}