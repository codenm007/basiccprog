#include<stdio.h>>
main()
{
	float a,b;
	printf ("\nEnter a number a:");
	scanf("%f",&a);
	printf ("\nEnter a number b:");
	scanf("%f",&b);
	if (a==b)
	printf("\nBoth are equal!");
	else if(a>b)
	printf("\nA is greater!");
	else
	printf("\nB is greater!");
}
