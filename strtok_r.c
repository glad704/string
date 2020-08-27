/*************************************************************************
 * FILE		: strtok_r().c
 * DESCRIPTION	: Does the same talk of parsing a string into sequence of token.
 * 		  strtok_r() is a reantrant version of strtok().
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 04/07/2020
 * ***********************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[] = "Geeks for Geeks";
	char* token;
	char* rest = str;

	while((token = strtok_r(rest, " ",&rest)))
	{
		printf("%s\n", token);
	}

	return (0);
}
