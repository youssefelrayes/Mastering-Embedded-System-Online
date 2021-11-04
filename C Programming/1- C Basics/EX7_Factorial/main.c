/*
 * main.c
 *
 *  Created on: Nov 4, 2021
 *      Author: Youssef Elrayes
 */

#include <stdio.h>

void main()
{
	int n,z,factorial=1;

	printf("Enter an integer : ");
	fflush(stdout);
	scanf("%d",&n);

	if(n<0)
		printf("ERROR!! Factorial of negative number does not exist");
	else if(n==0)
		printf("Factorial = %d",factorial);
	else
	{
	for(z=1;z<=n;z++)
	{
		factorial=factorial*z;
	}

	printf("Factorial = %d",factorial);
	}
}
