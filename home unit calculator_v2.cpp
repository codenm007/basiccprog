#include<stdio.h>
main()
{//codenm
	float unt,amt,finalamt;
	float a,b,c,d,base,tax;
	printf("\nHome Unit Calculator");
	printf("\n-------------------------------------------------\n");
	printf("\nEnter base rate:");
	scanf("%f",&base);
	printf("\nEnter tax rate in percentage:");
	scanf("%f",&tax);
	printf("\n Enter rate for first 100 units: RS ");
	scanf("%f",&a);
	printf("\n Enter rate for next 200 units after:RS ");
	scanf("%f",&b);
	printf("\n Enter rate for next 300 units after:RS ");
	scanf("%f",&c);
//	printf("\n Enter rate for next units:RS ");
//	scanf("%f",&d);
	// units input
	printf(" \n\n Enter units consumed:");
	scanf("%f",&unt);

printf("\n-------------------------------------------------\n");
	//unit calculation

	if(unt<100)
	{
		amt = base;
		finalamt= amt + ((amt*tax)/100);
		printf("BILL AMOUNT : RS %f",finalamt);
	}

	else if(unt>=100 && unt<200)
	{
		amt = 100*a+(unt-100)*a+base;
		finalamt= amt + ((amt*tax)/100);
		printf("BILL AMOUNT : RS %f",finalamt);
	}
	else if(unt>=200 && unt<=300)
	{
		amt = 100*a+100*b+(unt-200)*b+base;
		finalamt= amt + ((amt*tax)/100);
		printf("BILL AMOUNT : RS %f",finalamt);
	}
	else if(unt>=300)
	{
	
	
		amt = 100*a+200*b+(unt-300)*c+base;
		finalamt= amt + ((amt*tax)/100);
		printf("BILL AMOUNT : RS %f",finalamt);
	}
		else 
		printf("Invalid input !!");

    
printf("\n-------------------------------------------------\n");
}
