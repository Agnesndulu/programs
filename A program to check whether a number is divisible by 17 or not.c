//Aprogram to find grade of a stuident
#include <stdio.h>
int main  ()
{
	int a;
	printf("enter the grade");
	scanf("%d",&a);
	

	if(a>=70 && a<=100)
	{
		printf ("enter grade A");
	}
	else if(a<=69 &&>=60)
	
	{
		printf("Enter grade B");
	}
	else if(a<=59 &&>=50)
	{
		printf("enter grade C");
	}
	else if(a<=49 &&>=40)
	{
		printf("enter grade D");
	}
	else(a<=39 &&>=0)
	{
		printf("enter FAIL");
	}
	return 0;
	
}