/******************************************************************
 * FILE		: strcpy().c
 * DESCRIPTION	: Copy the source string in destination array.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 04/07/2020
 * ***************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char src[40];
	char dest[100];

	memset(dest,'\0',sizeof(dest));
	strcpy(src,"This is practice session!!");
	strcpy(dest,src);

	printf("Final copied string : |%s|\n",dest);
	return 0;
}

