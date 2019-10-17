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
	for(i=0;i<n-1;++i)
	{
		for (j=i+1;j<n-i;++i)
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
   printf("\n Printing array after sorting in descending form:");
   for(i=0;i<n;i++)
	{
	printf(" %d",a[i]);
    }
}
