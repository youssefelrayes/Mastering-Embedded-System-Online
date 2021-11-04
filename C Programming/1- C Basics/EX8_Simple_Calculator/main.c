/*
 * main.c
 *
 *  Created on: Nov 4, 2021
 *      Author: Youssef Elrayes
 */

#include <stdio.h>

void main()
{
	char oper;
	int num1,num2;

	printf("Enter operator either + or - or * or / : ");
	fflush(stdout);
	scanf("%c",&oper);

	printf("Enter first operand : ");
	fflush(stdout);
	scanf("%d",&num1);
	printf("Enter second operand : ");
	fflush(stdout);
	scanf("%d",&num2);

	switch(oper)
	{
	case '+':
	{
		printf("%d + %d = %d",num1,num2,num1+num2);
		break;
	}
	case '-':
	{
		printf("%d - %d = %d",num1,num2,num1-num2);
		break;
	}
	case '*':
	{
		printf("%d * %d = %d",num1,num2,num1*num2);
		break;
	}
	case '/':
	{
		printf("%d / %d = %d",num1,num2,num1/num2);
		break;
	}

	}


}
