/*
 * main.c
 *
 *  Created on: Nov 4, 2021
 *      Author: Youssef Elrayes
 */
#include <stdio.h>

void main()
{
	char letter;

	printf("Enter Letter : ");
	fflush(stdout);
	scanf("%c",&letter);

	if(letter>=65 && letter<=90)
		printf("%c is an Alphabet",letter);
	else if(letter>=97 && letter<=122)
		printf("%c is an Alphabet",letter);
	else
		printf("%c is not an Alphabet",letter);


}

