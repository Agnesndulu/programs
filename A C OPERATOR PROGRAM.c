//A program of c operators
 #include <stdio.h>
 int main ()
 {
int a,b,add,sub,mul,div,rem;
printf("Enter a,b values:");
scanf("%d%d",&a,&b);
add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
rem=a%b;

printf("result of addition is=%d\n",add);
printf("result of substraction=%d\n",sub);
printf("result of multiplication is=%d\n",mul);
printf("result of division is=%d\n",div);
printf("result of remainder is=%d\n",rem);

return 0;
 }