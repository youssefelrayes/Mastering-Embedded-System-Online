/*
 * main.c
 *
 *  Created on: Nov 4, 2021
 *      Author: Youssef Elrayes
 */
#include <stdio.h>

void main()
{
	float num;

	printf("Enter 0number : ");
	fflush(stdout);
	scanf("%f",&num);

	if(num>0.0)
		printf("%.2f is Positive",num);
	else if(num<0.0)
		printf("%.2f is Negative",num);
	else if(num == 0.0)
		printf("You entered Zero");


}

