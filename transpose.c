#include<stdio.h>
void main()
{
	int i,j,r=0,c=0;
	int trans[10][10];
	printf("\nEnter the no of rows of the matrix:");
	scanf("%d",&r);
	printf("\nEnter the no of columns of the matrix:");
	scanf("%d",&c);
	int a[r][c];
	
	//Matrix created now taking input
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter the element at position a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
// Doing transpose
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			trans[j][i]=a[i][j];
		}
	}	
	//printing the created matix
	printf("\nPrinting the matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf ("\t%d",trans[i][j]);
		}
		printf("\n");
	}
}
