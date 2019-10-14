#include<stdio.h>
#include<conio.h>
void main()
{   int n,i,j,found=0,pos;
	printf("\nEnter the number of terms:");
	scanf("%d",&n);
	int sto[n];
	//Initialize the array input
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&sto[i]);
    }
    // Deletion array algorithm
    printf("\nEnter the position to delete:");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	{
	sto[i]=sto[i+1];
    }
    //Printing the deleted array 
    for(i=0;i<n-1;i++)
	{
	printf("%d\n",sto[i]);
    }
}
