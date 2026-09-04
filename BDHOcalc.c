#include <stdio.h>
void decimalCalculator();
int main()
{
	int choice;
	do
	{
		printf("\n");
		printf("========================\n");
		printf("NUMBER SYSTEM CALCULATOR\n");
		printf("========================\n");
		printf("\n");
		printf("1.Decimal Calculator\n");
		printf("2.Binary Calculator\n");
		printf("3.Octal Calculator\n");
		printf("4.Hexadecimal Calculator\n");
		printf("5.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			decimalCalculator();
			break;
			
			case 2:
			printf("Binary Calculator coming soon...\\n");
			break;
			
			case 3:
			printf("Octal Calculator coming soon...\n");
			break;
			
			case 4:
			printf("Hexadecimal Calculator coming soon...\n");
			break;
			
			case 5:
			printf("Exiting calculator...\n");
			break;
			
			default:
			printf("Invalid choice!\n");
		}
	}
	while(choice!=5);
	
	return 0;
}

void decimalCalculator()
{
	int operation;
	double a,b,result;
	
	printf("\n");	
	printf("Decimal Calculator:\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("Enter operation: ");
	scanf("%d",&operation);
	printf("Enter first number: ");
	scanf("%lf",&a);
	printf("Enter second number: ");
	scanf("%lf",&b);
	
	switch(operation)
	{
		case 1:
		result=a+b;
		printf("Result=%.2lf\n",result);
		break;
		
		case 2:
		result=a-b;
		printf("Result=%.2lf\n",result);
		break;
		
		case 3:
		result=a*b;
		printf("Result = %.2lf\n",result);
		break;
		
		case 4:
		if(b==0)
		{
			printf("Error: Division by zero is not possible\n");
		}
		else
		{
			result=a/b;
			printf("Result=%.2lf\n",result);
		}
		break;
		
		default:
		printf("Invalid operation!\n");
	}
}
