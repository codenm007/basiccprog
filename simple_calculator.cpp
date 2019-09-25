#include<stdio.h>
main()
{ int ch,res,a,b; 
printf("CALCULATOR PRPGRAM");
printf("\n------------------------------------------\n");
printf("\n Press 1 for ADDITION");
printf("\n Press 2 for SUBSTRACTION");
printf("\n Press 3 for DIVISION");
printf("\n Press 4 for MULTIPLICATION");
printf("\n Enter your choice:");
scanf("%d",&ch);
switch(ch)
{

case 1:
	printf("\nEnter two numbers:");
	scanf("%d%d",&a,&b);
	res= a+b;
	printf ("Result:%d",res);
	break;
	
case 2:
	printf("\nEnter two numbers:");
	scanf("%d%d",&a,&b);
	res= a-b;
	printf ("Result:%d",res);
	break;
case 3:
	printf("\nEnter two numbers:");
	scanf("%d%d",&a,&b);
	res= a/b;
	printf ("Result:%d",res);
	break;
case 4:
	printf("\nEnter two numbers:");
	scanf("%d%d",&a,&b);
	res= a*b;
	printf ("Result:%d",res);
break;
}
}
