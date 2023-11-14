#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char s1[60]="lovely proffesinal uni";
	char s2[60]="b sirish";
	int n=5;
	//strcpy( s2,s1);
	//strncpy(s2,s1,10);
	//strcat(s1,s2);
	strncat(s1,s2,5);
	
	printf("content after cpy s1 is not s2 is:  %s \n " , s2);
	
}
