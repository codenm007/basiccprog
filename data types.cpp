#include<stdio.h>
main()
{
	char cc;
	int a;
	float b;
	double d;
	printf("\nEnter value in character:");
	scanf("%c",&cc);
	printf ("Enter integer value:");
	scanf("%d",&a);
	printf("\nEnter value in float:");
	scanf("%f",&b);

	printf("\nEnter value in double:");
	scanf("%lf",&d);
	//now print
	printf ("\nInteger value = %d",a);
	printf ("\nFloat value= %f",b);
	printf ("\nCharacter value= %c",cc);
	printf ("\nDouble value= %lf",d);
	
}
