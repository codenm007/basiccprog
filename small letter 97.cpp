#include<stdio.h>
main()
{
	int i,j;
	char c;
	for(i=65;i<=71;i++)
	{ for(j=65;j<=i;j++)
	{
		c=(char)j;
		printf("%c",c);
	}
	printf("\n");
	}
}
