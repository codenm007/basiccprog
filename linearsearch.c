#include<stdio.h>
#include<conio.h>
void main()
{   int n,i,j,found=0,sch;
	printf("\nEnter the number of terms:");
	scanf("%d",&n);
	int sto[n];
	//Initialize the array input
	printf("\nEnter the elements in array:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&sto[i]);
    }
 //LINEAR SEARCH ALGORITHM 
    printf("\nEnter the element to search:");
    scanf("%d",&sch);
    for(j=0;j<n;j++)
	{
		if(sto[j]==sch)
		{
			printf("\nElement found at location %d!",j+1);
			found=1;
			break;
	}
	
	   }   
	   if(found==0)
	   printf("\nSorry!The array does not contain this element!");


}
