/*
 * main.c
 *
 *  Created on: Nov 2, 2021
 *      Author: Youssef Elrayes
 */
#include <stdio.h>

void main()
{
	char letter;

	printf("Enter letter : ");
	fflush(stdout);
	scanf("%c",&letter);

	switch(letter)
	{
	case 'a':
	case 'A':
	case 'o':
	case 'O':
	case 'i':
	case 'I':
	case 'e':
	case 'E':
	case 'u':
	case 'U':
	{
		printf("%c is Vowel",letter);
	}
		break;
	default:
		printf("%c is Consonant",letter);
		break;
	}
}


