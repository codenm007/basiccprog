#include<stdio.h>
main()
{   int a,b;
	printf("Enter two values of x, y:\n");
	scanf("%d%d",&a,&b);
	printf("\nResult x X y = %d",mul(a,b));
}

int mul(int x,int y)
{
	return(x*y);
	
}

