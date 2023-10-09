#include<stdio.h>
void SwapStrings(char **str1,char **str2)
{//The str1 and str2 parameters of SwapStrings are double pointers,
// meaning they can store the addresses of pointers.
	char *temp=*str1;
	*str1=*str2;
	*str2=temp;
}
main ()
{
	char *str1="Hello";
	char *str2="World";
	printf("Before Swapping:\n");
	printf("str1: %s\n",str1);
	printf("str2: %s\n",str2);
	SwapStrings(&str1,&str2);
	printf("After swapping:\n");
	printf("str1: %s\n",str1);
	printf("str1: %s\n",str2);
}
/*When we pass a pointer as an argument to a function, 
we are essentially passing the address of the variable that
 the pointer points to. So, if we want to modify the value of 
 the pointer (i.e., the address it holds) in the calling function,
  we need to pass the address of the pointer itself to the function. 
  This is where double pointers come into play. */
