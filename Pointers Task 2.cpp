#include<stdio.h>
int findMax(int *arr, int size)
{
	int max= *arr;//It initializes 
//a variable named max with the value at the memory location pointed to by arr
// This sets max to the first element of the array.
	for(int i=1; i<size; i++)
	{//It then loops through the array starting from the second element (i = 1) up to size - 1.
		if(*(arr+i)>max)
		max=*(arr+i);
	}
	return max;
}
main ()
{//The variable size is calculated as the total size of the array divided
// by the size of a single element (sizeof(arr) / sizeof(arr[0])).
	int arr[]={5,10,3,8,15};
	int size=sizeof (arr)/sizeof (arr[0]);
	int max=findMax(arr,size);
	printf("The maximum element is %d\n",max);
}
/*n C, when you pass an array to a function, you are actually passing
 a pointer to the first element of the array. So, in the function findMax,
the parameter int *arr is actually a pointer to an integer. When you
 pass the array arr as an argument to the function, you are passing the
  address of the first element of the array. */
