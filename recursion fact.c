#include<stdio.h>
main()
{   int n;
	printf("Enter the no to find out fact:");
	scanf("%d",&n);
	printf("The result of fact is : %d",fact(n));
	return 0;
}
fact(int x)
{
	if(x==1)
	return 1;
	else 
	x=x*fact(x-1);
}
