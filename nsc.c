#include <stdio.h>
#include <stdlib.h>

void decimalCalculator();
void binaryCalculator();
void octalCalculator();
void hexadecimalCalculator();
void printBinary(long long number);
void operationMenu();

int main()
{
	int choice;
	do
	{
		printf("\n");
		printf("========================\n");
		printf("NUMBER SYSTEM CALCULATOR\n");
		printf("========================\n");
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
			binaryCalculator();
			break;
			
			case 3:
			octalCalculator();
			break;
			
			case 4:
			hexadecimalCalculator();
			break;
			
			case 5:
			printf("Program terminated\n");
			break;
			
			default:
			printf("Invalid choice!\n");
			break;
		}
	}
	while(choice!=5);
	return 0;
}

void operationMenu()
{
	printf("\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
}

void decimalCalculator()
{
	double a,b,result;
	int operation;
	
	printf("\n");
	printf("Decimal Calculator");
	operationMenu();
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
		break;
		case 2:
		result=a-b;
		break;
		case 3:
		result=a*b;
		break;
		case 4:
		if(b==0)
		{
			printf("Error: Division by zero\n");
			return;
		}
		result=a/b;
		break;
		default:
		printf("Invalid operation\n");
		return;
	}
	printf("Result=%.2lf\n",result);
}

void binaryCalculator()
{
	char a[100],b[100];
	int operation;
	long long num1,num2,result;

	printf("\n");
	printf("Binary Calculator");
	operationMenu();
	printf("Enter operation: ");
	scanf("%d",&operation);
	printf("Enter first binary number: ");
	scanf("%s",a);
	printf("Enter second binary number: ");
	scanf("%s",b);

	num1=strtol(a,NULL,2);
	num2=strtol(b,NULL,2);

	switch(operation)
	{
		case 1:
		result=num1+num2;
		break;

		case 2:
		result=num1-num2;
		break;

		case 3:
		result=num1*num2;
		break;

		case 4:
		if(num2==0)
		{
			printf("Error: Division by zero\n");
			return;
		}

		result=num1/num2;
		break;
		default:
		printf("Invalid operation\n");
		return;
	}
	printf("Result=");
	printBinary(result);
	printf("\n");
}

void octalCalculator()
{
	char a[100],b[100];
	int operation;
	long long num1,num2,result;
	
	printf("\n");
	printf("Octal Calculator");
	operationMenu();
	printf("Enter operation: ");
	scanf("%d",&operation);
	printf("Enter first octal number: ");
	scanf("%s",a);
	printf("Enter second octal number: ");
	scanf("%s",b);
	num1=strtol(a,NULL,8);
	num2=strtol(b,NULL,8);
	
	switch(operation)
	{
		case 1:
		result=num1+num2;
		break;
		case 2:
		result=num1-num2;
		break;
		case 3:
		result=num1*num2;
		break;
		case 4:
		if(num2==0)
		{
			printf("Error: Division by zero\n");
			return;
		}
		result=num1/num2;
		break;
		default:
		printf("Invalid operation\n");
		return;
	}
	printf("Result=%llo\n",result);
}

void hexadecimalCalculator()
{
	char a[100],b[100];
	int operation;
	long long num1,num2,result;
	
	printf("\n");
	printf("Hexadecimal Calculator");
	operationMenu();
	printf("Enter operation: ");
	scanf("%d",&operation);
	printf("Enter first hexadecimal number: ");
	scanf("%s",a);
	printf("Enter second hexadecimal number: ");
	scanf("%s",b);
	
	num1=strtol(a,NULL,16);
	num2=strtol(b,NULL,16);
	
	switch(operation)
	{
		case 1:
		result=num1+num2;
		break;
		
		case 2:
		result=num1-num2;
		break;
		
		case 3:
		result=num1*num2;
		break;
		
		case 4:
		if(num2==0)
		{
			printf("Error: Division by zero\n");
			return;
		}
		result=num1/num2;
		break;
		
		default:
		printf("Invalid operation\n");
		return;
	}
	printf("Result=%llX\n",result);
}

void printBinary(long long number)
{
	int binary[64];
	int i=0;
	
	if(number==0)
	{
		printf("0");
		return;
	}
	while(number>0)
	{
		binary[i]=number%2;
		number=number/2;
		i++;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",binary[i]);
	}
}
