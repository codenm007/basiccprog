#include<stdio.h>
main()
{
	int arr[10];
	int i,n;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the no:");
		scanf("%d",&arr[i]);
		printf("\nArray value : %d",arr[i]);
	}
    //for(i=0;i<n;i++)
   // i=0;
  /*  while(i<n)
    {   
    	printf("\n array value reprint %d\n",arr[i]);
    	i++;
	}
	*/
}
