/********************************************************************
 * FILE		: strncat().c
 * DESCRIPTION	: Append the source string in the end of the destination 
 * 		  string upto n character.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 04/07/2020
 * *****************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char src[50],dest[50];

	strcpy(src," HANSDA.com");
	strcpy(dest,"GLADSON");

	strncat(dest,src,7);

	printf("Final destination string : |%s|\n",dest);
	return(0);
}
