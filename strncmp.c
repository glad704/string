/********************************************************************
 * FILE		: strncmp().c
 * DESCRIPTION	: Compare string 1 with string 2 upto n character
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 04/07/2020
 * *****************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[15];
	char str2[15];
	int ret;

	strcpy(str1,"abcdef");
	strcpy(str2,"ABCDEF");

	ret = strncmp(str1,str2,4);

	if(ret<0)
	{
		printf("str1 is less than str2\n");
	}
	else if(ret>0)
	{
		printf("str2 is less than str1\n");
	}
	else
	{
		printf("str1 is equal to str2\n");
	}

	return(0);
}
