/*************************************************************************
 * FILE		: sort_name_in_alphabetical_order().c
 * DESCRIPTION	: Program to take names and sort names in alphabetical order.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 08/07/2020
 * ***********************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[50][50],temp[50];
	int i,size,j;
	printf("Enter number of names: ");
	scanf("%d",&size);
	printf("Enter %d names:\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%s",str[i]);
	}

	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}

	printf("After sorting names are:\n");
	for(i=0;i<size;i++)
	{
		printf("%s\n",str[i]);
	}

	return 0;
}
