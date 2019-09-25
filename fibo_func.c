#include<stdio.h>
main()
{   int a;
	printf("Enter a no:\n");
	scanf("%d",&a);
	fibo(a);
}

int fibo(int n)
{
	int i,i1=0,i2=1,i3;
	printf("%d %d",&i1,&i2);
	for(i=3;i<=n;i++)
	{
		i3=i1+i2;
		printf(" %d ",i3);
		i1=i2;i2=i3;
	}
	
}

