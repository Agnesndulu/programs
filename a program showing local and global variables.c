
#include <stdio.h>
int fl();
int a=10;
main()
{
int a=20;
int b=fl();
printf("%d\n%d",a,b);
}
fl(int x)
{
	x=a;
	return x;
}
