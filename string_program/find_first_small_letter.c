/**************************************************************************
 * FILE		: find_first_small_letter().c
 * DESCRIPTION	: Program to find the first small letter in given string.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 09/07/2020
 * ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[30];
	printf("Enter your string: ");
	scanf("%[^\n]",str);
	int i;
	char ch;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			ch=str[i];
			break;
		}
		else
		{
			continue;
		}
	}
	printf("First small letter in a given string is: %c\n",ch);
	return 0;
}
