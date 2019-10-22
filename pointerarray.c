#include<stdio.h>
int main()
{
	int a[]={1,5,8,9,0};
	int *p;
	p=&a;
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		printf("%d",*(p+i));
		sum += *(p+i); 
	}
	printf("\nSum is %d",sum);
	return 0;
}
