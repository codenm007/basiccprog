#include<stdio.h>
main()
{//codenm
	float unt , amt;
	float a,b,c,d,base,tax;
	printf("\nHome Unit Calculator");
	printf("\n-------------------------------------------------\n");
	printf("\nEnter base rate:");
	scanf("%f",&base);
	printf("\nEnter tax rate:");
	scanf("%f",&tax);
	printf("\n Enter rate for first 100 units:");
	scanf("%f",&a);
	printf("\n Enter rate for  200 units after:");
	scanf("%f",&b);
	printf("\n Enter rate for 300 units after:");
	scanf("%f",&c);
	printf("\n Enter rate for next units");
	scanf("%f",&d);
	// units input
	printf(" \n\n Enter units consumed:");
	scanf("%f",&unt);
	
	//unit calculation
	
	if(unt>0 && unt<=100)
	{
		amt = base + tax;
		printf("BILL AMOUNT : RS %f",amt);
	}
	
	else if(unt>100 && unt<=200)
	{
		amt = ((100+(100-amt))*a)+base+tax;
		printf("BILL AMOUNT : RS %f",amt);
	}
	else if(unt>200 && unt<=300)
	{
		amt = 100*a+200*b+(200-amt)*b+base+tax;
		printf("BILL AMOUNT : RS %f",amt);
	}
	else if(unt>300 && unt<=400)
	{
		amt = 100*a+100*b+100*c+(400-amt)*c+base+tax;
		printf("BILL AMOUNT : RS %f",amt);
	} 
	else if(unt<600)
	{
		amt = 100*a+100*b+100*c+100*d+(500-amt)*d+base+tax;
		printf("BILL AMOUNT : RS %f",amt);
	}
    else
    printf("Sorry unit calculation upto 600 units!");
}


