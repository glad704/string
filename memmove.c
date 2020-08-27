/************************************************************************
 * FILE		: memmove().c
 * DESCRIPTION	: Copies n character from str2 to str1. In case of overlapping
 * 		  memory blocks, memmove() is a safer approach than memcpy().
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 04/07/2020
 * *********************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char dest[] = "oldstring";
	const char src[] = "newstring";

	printf("Before memmove dest = %s, src = %s\n",dest,src);
	memmove(dest,src,9);
	printf("After memmove dest = %s, src = %s\n",dest,src);
	return(0);
}
