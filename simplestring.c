#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	printf("Enter the string:");
	scanf("%s",str);
	printf("String is ");
	printf("%s",str);
	int a = strlen(str);
	printf("\nThe lenght of the string %d",a);
}
