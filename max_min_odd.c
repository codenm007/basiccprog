#include<stdio.h>
 main()
{   int n,i,j,temp,k;
	printf("\nEnter the number of terms:");
	scanf("%d",&n);
	int a[n];
	printf("\n Enter the elements in array:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	// BUBBLE SEARCH ALGORITHM
	for(i=0;i<n-1;i++)
	{
		for (j=0;j<n-i;j++)
		{
    	if(a[j]>a[j+1])
		{
		
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
	}
   }	
   }
   
   // printing after sorting
   printf("\n Printing array after sorting:");
   for(i=0;i<n;i++)
	{
	printf(" %d\n",a[i]);
	
    }
    // printing of odd elements
    printf("\n Odd elements:");
    for(i=0;i<n;i++)
    {
    if(a[i]%2!=0)
	{
		printf("%d\n",a[i]);
		}	
}
    printf("\nMinimum element : %d",a[0]);
     printf("\nMaximum element : %d",a[n-1]);
 }

