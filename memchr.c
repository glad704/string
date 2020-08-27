/************************************************************************
 * FILE		: memchr().c
 * DESCRIPTION	: Searches for the first occurrence of the character c in
 * 		  the first n bytes of the string.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 04/07/2020
 * **********************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char* ret;

	ret = memchr(str,ch,strlen(str));

	printf("String after |%c| is - |%s|\n",ch,ret);
	return (0);
}
