/*************************************************************************
 * FILE		: string_are_anagram_or_not().c
 * DESCRIPTION	: Program to check whether string are anagram or not.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 10/07/2020
 * ***********************************************************************/

#include<stdio.h>
#include<string.h>

void sort(char str[30])
{
	char temp;
	int i,j;
	for(i=0;i<strlen(str)-1;i++)
	{
		for(j=i+1;j<strlen(str);j++)
		{
			if(str[i]>str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
}

int main()
{
	char str[30],str2[30];
	printf("Enter your 1st string: ");
	scanf("%s",str);
	printf("Enter your 2nd string: ");
	scanf("%s",str2);
	
	if(strlen(str)!=strlen(str2))
	{
		printf("Strings are not anagrams!!.\n");
	}
	else
	{
		int i,count=0;

		//Sort two string
		sort(str);
		sort(str2);

		for(i=0;i<strlen(str);i++)
		{
			if(str[i]!=str2[i])
			{
				count=1;
			}
		}
		if(count==1)
		{
			printf("Input strings are not an anagram!!\n");
		}
		else
		{
			printf("Input strings are an anagram!!\n");
		}
	}
	return 0;
}

