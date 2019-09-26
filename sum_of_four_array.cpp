#include<stdio.h>
main()
{
	int sub[4];
	int i,sum=0;
	for (i=1;i<=4;i++)
	{
		printf("\nEnter a value:");
		scanf("%d",&sub[i]);
		sum=sum + sub[i];
    }
	 printf("\n\nYour result is %d ",sum);
}
