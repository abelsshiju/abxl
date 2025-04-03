#include<stdio.h>
struct employee
{
char name[30];
int empid;
float salary;
};
void main()
{
struct employee emp[10];
int n,i;
printf("enter no of employees:");
scanf("%d",&n);
printf("\nenter the details:\n");
for(i=0;i<n;i++)
{
printf("Name?:");
scanf("%s",emp[i].name);
printf("ID?:");
scanf("%d",&emp[i].empid);
printf("salary ?:");
scanf("%f",& emp[i].salary);
}
printf("\nEmployee details:\n");
for(i=0;i<n;i++)
{
printf("\nName:%s",emp[i].name);
printf("\nId:%d",emp[i].empid);
printf("\nSalary :%f\n\n",emp[i].salary);
}
}
