/*************************************************************************
 * FILE		: strxfrm().c
 * DESCRIPTION	: Transform the first n characters of the string src into
 * 		  current locale and place them in the string dest.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 04/07/2020
 * ***********************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char dest[20];
	char src[20];
	int len;

	strcpy(src,"Tutorials Point");
	len = strxfrm(dest,src,20);

	printf("Length of string |%s| is: |%d|\n",dest,len);

	return 0;
}
