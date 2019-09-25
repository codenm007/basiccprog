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
	printf("\n Enter rate for  200 units after:RS ");
	scanf("%f",&b);
	printf("\n Enter rate for 300 units after:RS ");
	scanf("%f",&c);
	printf("\n Enter rate for next units:RS ");
	scanf("%f",&d);
	// units input
	printf(" \n\n Enter units consumed:");
	scanf("%f",&unt);

printf("\n-------------------------------------------------\n");
	//unit calculation

	if(unt>0 && unt<=100)
	{
		amt = base;
		finalamt= amt + ((amt*tax)/100);
		printf("BILL AMOUNT : RS %f",finalamt);
	}

	else if(unt>100 && unt<=200)
	{
		amt = 100*a+(unt-100)*a+base;
		finalamt= amt + ((amt*tax)/100);
		printf("BILL AMOUNT : RS %f",finalamt);
	}
	else if(unt>200 && unt<=300)
	{
		amt = 100*a+100*b+(unt-200)*b+base;
		finalamt= amt + ((amt*tax)/100);
		printf("BILL AMOUNT : RS %f",finalamt);
	}
	else if(unt>300 && unt<=400)
	{
		amt = 100*a+100*b+100*c+(unt-300)*c+base;
		finalamt= amt + ((amt*tax)/100);
		printf("BILL AMOUNT : RS %f",finalamt);
	}
	else if(unt<500)
	{
		amt = (100*a)+(100*b)+(100*c)+(100*d)+((unt-400)*d)+base;
		finalamt= amt + ((amt*tax)/100);
		printf("BILL AMOUNT : RS %f",finalamt);
	}
    else
    printf("Sorry unit calculation upto 500 units!");
    
printf("\n-------------------------------------------------\n");
}
