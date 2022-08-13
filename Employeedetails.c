#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    char department[30];
    int empno;
    double salary;
} Employee;
 
int main()
{
    int n=20;

    Employee employees[n];
 
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);
        
        //Department
        printf("Department: ");
        scanf("%s",employees[i].department);

        //ID
        printf("Emp No.: ");
        scanf("%d",&employees[i].empno);

        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        char ch = getchar();
 
        printf("\n");
    }
 
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].empno);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
}
