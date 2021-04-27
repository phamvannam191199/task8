#include<stdio.h>
#include<string.h>
int main()
{
	char name[150];
	int i=0;
	int count=0;
	int length;
	
	printf("Enter your name:\n");
	gets(name);
	length = strlen(name);
	
	for(i=0;i<length;i++)
	{printf("%c",name[i]);
	switch(name[i])
	{
	case 'u':
	case 'o':
	case 'e':
	case 'a':	
	case 'i':
	count++;
	break;
	}
	}
	printf("Amount of vowel characters is: %d\n ",count);
		
		
	
    }
