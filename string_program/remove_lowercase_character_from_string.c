/*************************************************************************
 * FILE		: remove_lowercase_character_from-string.c
 * DESCRIPTION	: Program to remove lowercase character from given string.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 10/07/2020
 * ***********************************************************************/

#include<stdio.h>

int main()
{
	char str[30];
	printf("Enter your string: ");
	scanf("%[^\n]",str);
	int i,j;

	for(i=0;str[i]!='\0';++i)
	{
		while(str[i]>='a' && str[i]<='z')
		{
			for(j=i;str[j]!='\0';j++)
			{
				str[j]=str[j+1];
			}
			str[j]='\0';
		}
	}
	printf("After removing lowercase character. String is: %s\n",str);
	return 0;
}
