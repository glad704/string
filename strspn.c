/*************************************************************************
 * FILE		: strspn().c
 * DESCRIPTION	: Calculates the length of the initial segment of str1 which
 * 		  consists entirely of characters in str2.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 04/07/2020
 * ***********************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	int len;
	const char str1[] = "ABCDEFG019874";
	const char str2[] = "ABCD";

	len = strspn(str1,str2);

	printf("Length of initial segment matching is %d\n",len);

	return 0;
}
