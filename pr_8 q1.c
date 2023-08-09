#include<stdio.h>

void main()
{
	char s[100];
	int len=0;
	int *p;
	
	printf("Enter any string : ");
	gets(s);
	
	p = &s;
    
	strlen(s);
	
    len = strlen(s);
	*p = len;	 
 
	printf("The length of a string is : %d ",*p);
    
}

/* Enter any string : hello world
The length of a string is : 11     */
