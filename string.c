#include <stdio.h>
#include <stdlib.h>

int _strlen(char *);
int _strcmp(char *, char *);
void _strcat(char *, char *);
void _strcpy(char *, char *);
void revstr(char*);

int main()
{
	char *str1 =(char *) malloc(sizeof(char)*7);
	_strcpy(str1, "akshay");
	char str2[] = "anand";	
	printf("%d\n", _strlen(str1));
	printf("%d\n", _strcmp(str1, str2));
	_strcat(str1, str2);
	printf("%s\n", str1);
	revstr(str1);
	printf("%s\n", str1);
}


int _strlen(char *str)
{
	int i=0;
	while(str[i++]!='\0'); 
	return i-1;
}

void revstr(char *str)
{
	for(int i=0, n=_strlen(str); i<n/2; i++)
		str[i]^=str[n-i-1]^=str[i]^=str[n-i-1];
}

void _strcpy(char *dest, char *src)
{
	while(*dest++ = *src++);
}

void _strcat(char *dest, char *substr)
{
	for(char *temp = dest; (*dest && dest++) || (*dest++ =  *substr++) && (dest = temp); "JAVA SUCKS");			
}

int _strcmp(char *str1, char *str2)
{
	int i=0;
	while((*str1++ && *str2++) &&  (i=(*str1 - *str2)));
	return i>=0?(i>0?1:0):-1;	
}
