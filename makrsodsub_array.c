#include<stdio.h>
main()
{
	int arr[5];
	int i,n=5;
	//printf("Enter the no of elements:");
	//scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nEnter the marks of sub %d:",i);
		scanf("%d",&arr[i]);
		//printf("\nArray value : %d",arr[i]);
	}
    //for(i=0;i<n;i++)
    i=1;
    while(i<=n)
    {   
    	printf("\n Sub %d marks :  %d\n",i,arr[i]);
    	i++;
	}
}
