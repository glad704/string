/*****************************************************************
 * FILE		: strchr().c
 * DESCRIPTION	: Find the first occurrence of input character.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 04/07/2020
 *****************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[] = "My name is Gladson";
	char* ch = strchr(str,'a');
	printf("<a> inputted character first position is : %ld\n",ch-str+1);
	return 0;
}

