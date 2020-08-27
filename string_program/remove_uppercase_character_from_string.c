/**************************************************************************
 * FILE		: remove_uppercase_character_from_string().c
 * DESCRIPTION	: Program to remove uppercase character from string
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 10/07/2020
 * ************************************************************************/

#include<stdio.h>

int main()
{
	char str[30];
	printf("Enter your string: ");
	scanf("%[^\n]",str);
	int i,j;

	for(i=0;str[i]!='\0';++i)
	{
		while(str[i]>='A' && str[i]<='Z')
		{
			for(j=i;str[j]!='\0';j++)
			{
				str[j]=str[j+1];
			}
			str[j]='\0';
		}
	}
	printf("After removinguppercase character. String is: %s\n",str);
	return 0;
}
