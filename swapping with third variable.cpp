#include<stdio.h>
main()
{
	int a,b,temp;
	printf("Enter two nubers : a,b :");
	scanf("%d%d",&a,&b);
	printf("\nBefore swapping a=%d, b= %d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping a= %d , b= %d",a,b);

}
