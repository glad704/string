/**************************************************************************
 * FILE		: string_are_same_or_not().c
 * DESCRIPTION	: Program to check whether strings are same or not.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 10/07/2020
 * ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[30],str2[30];
	printf("Enter your 1st string: ");
	scanf("%[^\n]",str);
	printf("Enter your 2nd string: ");
	scanf("%s",str2);
	if(strlen(str)!=strlen(str2))
	{
		printf("String characters are not same!!\n");
	}
	else
	{
		int i,count=0;
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]==str2[i])
			{
				count=1;
				break;
			}
		}
		if(count!=1)
		{
			printf("String character are not same!!\n");
		}
		else
		{
			printf("String character are same!!\n");
		}
	}
	return 0;
}

