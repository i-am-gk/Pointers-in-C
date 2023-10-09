#include<stdio.h>
void concatStrings(char*dest,const char*src)
{//It uses a while loop to move the dest pointer to the end of
//the destination string. The loop continues until it reaches the null character ('\0')
//which indicates the end of the string.
	while(*dest)
	dest++;
	while(*src)//another while loop to copy characters from the src string to the dest string
	{
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
}
main ()
{
	char str1[100]="Hello";
	char str2[]="World!";
	concatStrings(str1,str2);
	printf("Concatenated string: %s\n",str1);
	
}
