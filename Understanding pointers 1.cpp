#include<stdio.h>
main ()
{
	int xyz=79;
	printf("Value of xyz is %d\n",xyz);
	printf("Address of xyz is %d\n",&xyz);
int a,b;
int *x, *y;
a=126;
b=19;
x=&a;
y=&b;
printf("Memory address of variable a = %d\n",x);
printf("Memory address of variable b = %d\n",y);
printf("Value in memory address x = %d\n",*x);
printf("Value im memory address y = %d\n",*y);

}
