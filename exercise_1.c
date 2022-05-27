
#include<stdio.h>
int main()
{
	int basic_salary,dearness_allowance,house_rent,gross_salary;

	printf("Enter  basic salary: ");
	scanf("%d",&basic_salary);
	dearness_allowance=0.4*basic_salary;
	house_rent=0.2*basic_salary;
	gross_salary=basic_salary-dearness_allowance-house_rent;
	printf("Gross salary of Niloy:%.2d", gross_salary);

	return 0;

}
