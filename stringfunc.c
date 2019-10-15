#include<stdio.h>
#include<string.h>
main()
{
	char str1[20],str2[20];
	printf("Enter the string1:");
	scanf("%s",str1);
	printf("Enter the string2:");
	scanf("%s",str2);
	printf("String is ");
	printf("%s%s",str1,str2);
	//STRING LENGTH USE
	int a = strlen(str1);
	printf("\nThe lenght of the string1 %d",a);
	//STRING COPY
	//normal copy
	printf("\n PRESS 1 FOR NORMAL STRING COPY");
	printf("\n PRESS 2 FOR N STRING COPY");
	printf("\n PRESS 3 FOR NORMAL STRING CONCATENATE");
	printf("\n PRESS 4 FOR N STRING CONCATENATE");
	printf("\n PRESS 5 FOR STRING COMPARE WITHOUT CASES");
	printf ("\nEnter your choice");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("\nNormal String copy");
	
	printf("%s",strcpy(str1,str2));
	break;
	//n copy method
	case 2:
	printf("\n 3 value String copy:\n");
    printf("%s", strncpy(str1,str2,3));
	break;
	case 3:
	//Normal concatenate method
	printf("\n Normal String Concatenate");
	printf("%s",strcat(str1,str2));
	break;
	case 4:
	//N concatenate method
	printf("\n 3 value String Concatenate\n");
	printf("%s",strncat(str1,str2,3));
	break;
	case 5:
			if(stricmp(str1,str2)==0)
			printf("\n EQUAL !");
			else
			printf("\n NOT EQUAL!");
			break;
	default:
		printf("\n INVALID INPUT!");
}
	
}
