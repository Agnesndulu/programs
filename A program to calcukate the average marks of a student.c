//Aprogram to find grade of a student of the average of 3 subjects
#include <stdio.h>
int main  ()
{
	int a;
	int b;
	int c;
	int avg;
	printf("enter the grade");
	scanf("%d",&a);

	printf("enter the grade");
	scanf("%d",&b);

	printf("enter the grade");
	scanf("%d",&c);
	
     avg=((a+b+c)/3);
     printf("avg%d\n",avg);
	if(avg>=70 && avg<=100)
	{
		printf ("enter grade A");
	}
	else if(avg<=69 &&avg>=60)
	
	{
		printf("Enter grade B");
	}
	else if(avg<=59 &&avg>=50)
	{
		printf("enter grade C");
	}
	else if(avg<=49 &&avg>=40)
	{
		printf("enter grade D");
	}
	else
	{
		printf("enter FAIL");
	}
	return 0;
	
}

	
