#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	    char *ptr = (char *)malloc(sizeof(char));
		*ptr="test";
	    strcpy(ptr, "TEST");
		printf("%s\n",ptr);
		free(ptr);
}
