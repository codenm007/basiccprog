#include<stdio.h>
#include<conio.h>
void main()
{   int n,i,j,found=0,sch,high,low,mid;
	printf("\nEnter the number of terms:");
	scanf("%d",&n);
	int sto[n];
	//Initialize the array input
	printf("\nEnter the elements in array in ascending order:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&sto[i]);
    }
 //BINARY SEARCH ALGORITHM 
    printf("\nEnter the element to search:");
    scanf("%d",&sch);
    low =0;
    high=n-1;
    while(low<=high)
	{
		mid = (low+high)/2;
		if(sch<sto[mid])
		{
			high = mid-1;
		 } 
		 else if (sch>sto[mid])
		 {
		 	low =mid +1;
		 }
		 else if(sch == sto[mid])
		 {
		 	printf("\n Element found at location %d !",mid+1);
		 	found = 1;
		 	break;
		 }
	}
	   if(found==0)
	   printf("\nSorry!The array does not contain this element!");


}
