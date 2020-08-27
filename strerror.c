/************************************************************************
 * FILE		: strerror().c
 * DESCRIPTION	: Searches an internal array for the error number errnum and
 * 		  returns a pointer to an error message string.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 04/07/2020
 * **********************************************************************/

#include<stdio.h>
#include<string.h>
#include<errno.h>

int main()
{
	FILE* fp;
	fp = fopen("file.txt","r");
	if(fp==NULL)
	{
		printf("Error: %s\n",strerror(errno));
	}

	return (0);
}

