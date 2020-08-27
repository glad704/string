/**********************************************************************
 * FILE		: strcat().c
 * DESCRIPTION	: Append the source string in destination string
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 04/07/2020
 * *******************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char src[50],dest[50];
	strcpy(src," HANSDA");
	strcpy(dest,"GLADSON");

	strcat(dest,src);

	printf("Final destination string : |%s|",dest);
	printf("\n");
	return 0;
}
