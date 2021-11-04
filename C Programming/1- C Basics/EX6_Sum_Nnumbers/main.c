/*
 * main.c
 *
 *  Created on: Nov 4, 2021
 *      Author: Youssef Elrayes
 */
#include <stdio.h>

void main()
{
	unsigned int n,z,sum=0;

	printf("Enter an integer : ");
	fflush(stdout);
	scanf("%d",&n);

	for(z=1;z<=n;z++)
	{
		sum=sum+z;
	}

	printf("Sum = %d",sum);

}



