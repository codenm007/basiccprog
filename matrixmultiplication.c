#include<stdio.h>
void main()
{
	int i,j,k,r1,c1,r2,c2;
	int mult[10][10]={0};
	// Taking input of matrix 1
	printf("\nEnter the no of rows of the matrix A:");
	scanf("%d",&r1);
	printf("\nEnter the no of columns of the matrix A:");
	scanf("%d",&c1);
	int a[r1][c1];
	// Taking input for matrix 2
	printf("\nEnter the no of rows of the matrix B:");
	scanf("%d",&r2);
	printf("\nEnter the no of columns of the matrix B:");
	scanf("%d",&c2);
	int b[r2][c2];
	
	if(c1==r2) //Varifying columns of matrix A and rows of matrix B match or not
	{
	//If logic verified then operation starts
	// Matrix A input
	printf("\nMatrix a input:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\nEnter the element at position a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	// Matrix B input
	printf("\nMatrix B input:");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\nEnter the element at position b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	// Matrix Multiplication
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<r2;k++)
			{
				mult[i][j]+=a[i][k]*b[k][j];
			}
		}
		
	}
	//printing the resultant matrix
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",mult[i][j]);
		}
		printf("\n");
	}
}
else 
{
	printf("\nThe matrix multiplication is not possible as columns of matrix A and rows of matrix B does not match!");
}
}
