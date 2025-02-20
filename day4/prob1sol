#include<stdio.h>

struct Employee_t{
    int id;
    char name[255];
    float salary;
    char department[50];
};
typedef struct Employee_t Employee;
void displayEmployees(Employee emp[],int n);
Employee findHighestSalary(Employee emp[],int n);
void readEmployees(Employee emp[], int n);
int main(){
    int employeeCount;
    printf("enter number of employees:");
    scanf("%d",&employeeCount);
    Employee employees[1000];
    readEmployees(employees, employeeCount);
    displayEmployees(employees ,employeeCount);
    Employee highestSalariedEmployee = findHighestSalary(employees, employeeCount);
    printf("Employee with highest salary:%s,%.2f(%s)\n",
            highestSalariedEmployee.name,
            highestSalariedEmployee.salary,
            highestSalariedEmployee.department);
    return 0;
}
void readEmployees(Employee emp[], int n){
    printf("Enter the details(id,name,salary,department):\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d%s%.2f%s",&emp[i].id,emp[i].name,&emp[i].salary,emp[i].department);
    }
}
void displayEmployees(Employee emp[],int n){
    printf("Employee details are:");
    for(int i=0;i<n;i++){
        printf("%d %s %f %s\n", i+1,emp[i].id,emp[i].name,emp[i].salary,emp[i].department);
    }
}
Employee findHighestSalary(Employee emp[],int n){
    Employee highestSalariedEmployee=emp[0];
    for(int i=0;i<n;i++){
        if(emp[i+1].salary>highestSalariedEmployee.salary)
        highestSalariedEmployee=emp[i+1];
    }
return highestSalariedEmployee;
}
