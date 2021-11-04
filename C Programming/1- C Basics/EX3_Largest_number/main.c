/*
 * main.c
 *
 *  Created on: Nov 2, 2021
 *      Author: Youssef Elrayes
 */
#include <stdio.h>

void main()
{
	float num1,num2,num3;

	printf("Enter first number : ");
	fflush(stdout);
	scanf("%f",&num1);

	printf("Enter second number : ");
	fflush(stdout);
	scanf("%f",&num2);

	printf("Enter third number : ");
	fflush(stdout);
	scanf("%f",&num3);

	if(num1>num2)
	{
		if(num1>num3)
			{printf("Largest number : %.2f",num1);}
		else
			{printf("Largest number : %.2f",num3);}
	}
	else if(num2>num1)
	{
		if(num2>num3)
			{printf("Largest number : %.2f",num2);}
		else
			{printf("Largest number : %.2f",num3);}
	}


}


