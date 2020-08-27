/*****************************************************************
 * FILE		: strcmp().c
 * DESCRIPTION	: Compare string 1 with string 2
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 04/07/2020
 * **************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[15];
	char str2[15];
	int ret;

	strcpy(str1,"abcdef");
	strcpy(str2,"ABCDEF");

	ret = strcmp(str1,str2);

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
	return 0;
}
