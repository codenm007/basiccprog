#include<stdio.h>
main()
{   int a,i1=0,i2=1;
	printf("Enter a no:\n");
	scanf("%d",&a);
	printf("%d %d",i1, i2);
	fibo(a);
}
//I will use the febo recursion function
int fibo(int n)
{
	int i,i1=0,i2=1,i3;
	for(i=3;i<=n;i++)
	{
		i3=i1+i2;
		printf(" %d ",i3);
		i1=i2;i2=i3;
	}
	return 0;
}

