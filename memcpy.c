/************************************************************************
 * FILE		: memcpy().c
 * DESCRIPTION	: Copies n characters from memory area src to memory area dest.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 04/07/2020
 * **********************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50];
	strcpy(dest,"Heloooo!!");
	printf("Before memcpy dest = %s\n",dest);
	memcpy(dest,src,strlen(src)+1);
	printf("After memcpy dest = %s\n",dest);
	return(0);
}
