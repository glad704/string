/**************************************************************************
 * FILE		: convert_character_to_ASCII().c
 * DESCRIPTION	: Program to convert character value to its ASCII value.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 08/07/2020
 * ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	printf("Enter your string:");
	scanf("%[^\n]",str);
	int i;
	printf("ASCII values of letters in string are:\n");
	for(i=0;i<strlen(str);i++)
	{
		printf("%c==> %d\n",str[i],str[i]);
	}
	return 0;
}
