/**************************************************************************
 * FILE		: concatenate_two_string().c
 * DESCRIPTION	: Program to concatenate two string without using strcat().
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 09/07/2020
 * ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[30];
	printf("Enter your 1st string: ");
	gets(str);
	char str2[30];
	printf("Enter your 2nd string: ");
	gets(str2);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		//str[i]=' ';
		i++;
	}
	int j;
	printf("%d\n",i);
	printf("After concatenate string is: ");
	for(j=0;str2[j]!='\0';j++,i++)
	{
		str[i]=str2[j];
	}
	str[i]='\0';
	printf("%s\n",str);
	return 0;
}
