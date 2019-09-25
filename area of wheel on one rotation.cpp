#include<stdio.h>
int main()
{   int r,d,area;
	printf("\n Enter the radius of the wheel in inches:");
    scanf("%d",&r);
	d=r*2;
	area=3.14*2*r;
	printf("\n Diameter of the wheel:%d in inches",d);
	printf("\n Area travelled on one rotation:%d inches^2",area);
		
}
