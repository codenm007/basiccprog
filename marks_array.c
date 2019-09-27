#include<stdio.h>
main()
{
	int sub[10];
	int i,sum=0;
	float res;
	printf("Maximum marks in each subject is 50\n");
	//while(i<=10)
	for (i=1;i<=10;i++)
	{
		printf("\nEnter the value of the sub %d:",i);
		scanf("%d",&sub[i]);
		if (sub[i]<=50)
		{
		sum=sum + sub[i];
		//i++;
		}
		else
		printf("\nEnter valid marks within 50!\n");
   }
	 res=(sum/500)*100;
	 printf("Your percentage marks is %f ",res);
	 
}
