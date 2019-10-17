//Find the maximum and minimum number with the sum of max and min of an array 
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,temp;
	printf("\n Enter the number of elements :");
	scanf("%d",&n);
	int a[n];
	printf("Enter the %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	// Bubblesort element
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1]) // For the element in descending order use <
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	// Printing the sorted array
	printf("\nThe sorted array is ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	
	printf("\n Maximum number : %d",a[0]);
	printf("\n Maximum number : %d",a[n-1]);
	printf("\n Sum is %d",a[0]+a[n-1]);
	
}
