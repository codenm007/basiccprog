#include<stdio.h>
int prime(int n)
{
	int i,flag=0;
	for(i=1;i<=n;i++)
	{
		n=n%i;
	    flag++;	
	}
	if (n==2)
	printf("It is a prime no!\n");
	else
	printf("It is not a prime no!\n");
	
}

main()
{
	
}
