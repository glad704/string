/***********************************************************************
 * FILE		: memset().c
 * DESCRIPTION	: Copies the character c to the first n characters of the
 * 		  string pointed to, by the argument str.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 04/07/2020
 * ********************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];

	strcpy(str,"This is string.h library function");
	puts(str);

	memset(str,'$',7);
	puts(str);

	return(0);
}

