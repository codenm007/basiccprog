#include<stdio.h>
int main()
{   int c,stu,distributed,left;
	printf("Enter the no of choclates :");
	scanf("%d",&c);
	printf("Enter the no of students :");
	scanf("%d",&stu);
	distributed=c/stu;
	left=c%stu;
	printf ("\n The no of Choclates distributed : %d \n No of choclates left : %d",distributed,left);
}
