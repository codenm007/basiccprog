#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	printf("Enter the string:");
	scanf("%s",str);
	printf("\nString in upper case : %s",strupr(str));
	printf("\nString in lower case : %s",strlwr(str));
	
} 
