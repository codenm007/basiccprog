#include<stdio.h>
main()
{
	int i,n,l,table;
	printf("Enter the no whose table to calculate:");
	scanf("%d",&n);
	printf("Enter the no upto which the table to be calculated:");
	scanf("%d",&l);
	for(i=1;i<=l;i++)
	{
		table = n*i;
		printf("%d X %d = %d \n",n,i,table);
	}
	return 0;
}
