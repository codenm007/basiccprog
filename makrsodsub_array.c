#include<stdio.h>
main()
{
	int arr[5];
	int i,sum=0;
	//printf("Enter the no of elements:");
	//scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		printf("\nEnter the marks of sub %d:",i);
		scanf("%d",&arr[i]);
		printf("\nArray value : %d",arr[i]);
		sum = sum +arr[i];
		
	}
	printf("\n\nsum of the array = %d",sum);
	
    //for(i=0;i<n;i++)
   /*/ i=1;
    int sum =0;
    while(i<=5)
    {  
    	sum = sum +arr[i];
    	i++;
	}	printf("\nsum of the array = %d",sum);
	*/
}
