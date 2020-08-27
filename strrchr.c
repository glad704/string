/***It scans a string in reverse direction, looking for a specific character c***
 ***
 	SYNTAX:
		char* strrchr(const char *s, int c);
 ***/

#include<stdio.h>
#include<string.h>

int main()
{
	char text[]="I learn thorugh IndiaBix.com";
	char *ptr,c='i';

	ptr=strrchr(text,c);
	if(ptr)
	{
		printf("THe position of '%c' is: %ld\n",c,ptr-text);
	}
	else
	{
		printf("The character was not found\n");
	}
	return 0;
}
