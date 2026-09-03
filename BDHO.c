#include <stdio.h>
#include <stdlib.h>
int main()
{
	int choice;
	char num[50];
	int decimal;
	do
	{
		printf("\n1.Binary to Decimal");
		printf("\n2.Binary to Octal");
		printf("\n3.Binary to Hexadecimal");
		printf("\n4.Decimal to Binary");
		printf("\n5.Decimal to Octal");
		printf("\n6.Decimal to Hexadecimal");
		printf("\n7.Octal to Decimal");
		printf("\n8.Octal to Binary");
		printf("\n9.Octal to Hexadecimal");
		printf("\n10.Hexadecimal to Decimal");
		printf("\n11.Hexadecimal to Binary");
		printf("\n12.Hexadecimal to Octal");
		printf("\n13.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			printf("Enter Binary: ");
			scanf("%s",num);
			decimal=strtol(num,NULL,2);
			printf("Decimal=%d\n",decimal);	
			printf("\n");
			break;
			
			case 2:
			printf("Enter Binary: ");
			scanf("%s",num);
			decimal=strtol(num,NULL,2);
			printf("Octal=%o\n",decimal);
			printf("\n");
			break;
			
			case 3:
			printf("Enter Binary: ");
			scanf("%s",num);
			decimal=strtol(num,NULL,2);
			printf("Hexadecimal=%X\n",decimal);
			printf("\n");
			break;
			
			case 4:
			printf("Enter Decimal: ");
			scanf("%d",&decimal);
			printf("Binary=%b\n",decimal);
			printf("\n");
			break;
			
			case 5:
			printf("Enter Decimal: ");
			scanf("%d",&decimal);
			printf("Octal=%o\n",decimal);
			printf("\n");
			break;
			
			case 6:
			printf("Enter Decimal: ");
			scanf("%d",&decimal);
			printf("Hexadecimal=%X\n",decimal);
			printf("\n");
			break;
			
			case 7:
			printf("Enter Octal: ");
			scanf("%s",num);
			decimal=strtol(num,NULL,8);
			printf("Decimal=%d\n",decimal);
			printf("\n");
			break;
			
			case 8:
			printf("Enter Octal: ");
			scanf("%s",num);
			decimal=strtol(num,NULL,8);
			printf("Binary=%b\n",decimal);
			printf("\n");
			break;
			
			case 9:
			printf("Enter Octal: ");
			scanf("%s",num);
			decimal=strtol(num,NULL,8);
			printf("Hexadecimal=%X\n",decimal);
			printf("\n");
			break;

			case 10:
			printf("Enter Hexadecimal: ");
			scanf("%s",num);
			decimal=strtol(num,NULL,16);
			printf("Decimal=%d\n",decimal);
			printf("\n");
			break;

			case 11:
			printf("Enter Hexadecimal: ");
			scanf("%s",num);
			decimal=strtol(num,NULL,16);
			printf("Binary=%b\n",decimal);
			printf("\n");
			break;

			case 12:
			printf("Enter Hexadecimal: ");
			scanf("%s",num);
			decimal=strtol(num,NULL,16);
			printf("Octal=%o\n",decimal);
			printf("\n");
			break;

			case 13:
			printf("Program terminated.\n");
			printf("\n");
			break;
			default:
			printf("Invalid choice!\n");
			printf("\n");
		}
	}
	while(choice!=13);
	return 0;
}
