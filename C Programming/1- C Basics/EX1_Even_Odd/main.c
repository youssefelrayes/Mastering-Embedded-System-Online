/*
 * main.c
 *
 *  Created on: Nov 2, 2021
 *      Author: Youssef Elrayes
 */
#include <stdio.h>

void main()
{
	int num;

	printf("Enter number : ");
	fflush(stdout);
	scanf("%d",&num);

	if(num%2 == 0)
		printf("Number is Even");
	else
		printf("Number is Odd");

}

