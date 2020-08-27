/*************************************************************************
 * FILE		: strcspn().c
 * DESCRIPTION	: Calculates the length of the initial segment of str1 which
 * 		  consists entirely of characters not in str2.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 04/07/2020
 * ***********************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	int len;
	const char str1[] = "ABCDEF4965910";
	const char str2[] = "013";

	len = strcspn(str1,str2);

	printf("First matched character is at %d\n",len+1);
	return 0;
}

