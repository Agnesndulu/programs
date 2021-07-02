//Aprogram to check whether a number is divisible by 17
#include <stdio.h>
int main  ()
{
	int a;
	printf("enter the number|n");
	scanf("%d",&a);
	
	if(a%17==0)
	{
		printf ("the number is divisible");
	}
	else
	
	{
		printf("the number is not divisible");
	}
	return 0;
	
}