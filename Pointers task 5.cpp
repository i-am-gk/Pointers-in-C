#include<stdio.h>
void reverseArray(int *arr,int size)
{
	int *start=arr;
	int *end=arr+size-1;
	while(start<end)
	{
		int temp=*start;
		*start=*end;
		*end=temp;
		//move pointer inwards
		start++;
		end--;
	}
}
main ()
{
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("Before Reversing:\n");
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	//Reverse array
	reverseArray(arr,size);
	printf("\nAfter Reversing:\n");
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}	
}
