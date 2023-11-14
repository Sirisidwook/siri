#include<stdio.h>
#include<string.h>
main()
{
char s1[50]="HEelo";
char s2	[20]="HEllo";
//strcat(s1,s2);
//strncat(s1,s2,3);
int x;
//x=strncmp(s1,s2,3);

//printf("%d",x);
//printf("%s\n",s1);
//x=strlen(s1);


printf("%s\n", strrev(s1) );	
printf("%s\n",  strupr(s1) );
printf("%s\n",  strlwr(s1) );	
	
	
}
