#include<stdio.h>
void swap(int *a,int *b)
{
	int temp =*a;
	*a=*b;
	*b=temp;
}
main ()
{
	int x=10,y=20;
	printf("Before Swapping x=%d, y=%d\n",x,y);
	swap(&x,&y);
	printf("After Swapping x=%d, y=%d",x,y);

}
