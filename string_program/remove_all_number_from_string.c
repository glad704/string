/************************************************************************
 * FILE		: remove_all_number_from_string().c
 * DESCRIPTION	: Program to take input string from user and remove all 
 * 		  number from string.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 10/07/2020
 * **********************************************************************/

#include<stdio.h>

int main()
{
	char str[30];
	printf("Enter your string: ");
	scanf("%[^\n]",str);
	int i,j;

	for(i=0;str[i]!='\0';++i)
	{
		while(str[i]>='0'&&str[i]<='9')
		{
			for(j=i;str[j]!='\0';++j)
			{
				str[j]=str[j+1];
			}
			str[j]='\0';
		}
	}

	printf("After removing all numbers. String is: %s\n",str);
	return 0;
}
