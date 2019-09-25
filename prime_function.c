#include<stdio.h>
main()
{   int a;
	printf("Enter a no:\n");
	scanf("%d",&a);
	prime(a);
}

int prime(int n)
{
	int i,flag=0,c;
	for(i=1;i<=n;i++)
	{
		c=n%i;
		if(n==0)
	    {
		flag++;
	    }
	}
	if (flag==2)
	printf("It is a prime no!\n");
	else
	printf("It is not a prime no!\n");
	return 0;
	
}

