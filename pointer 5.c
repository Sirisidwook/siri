#include<stdio.h>
main()
{
int x=10, b=9;
char c='A';
void*ptr;


ptr=&x;
printf(" the value at generic pointer is %d \n",*(int*)ptr);

ptr=&c;
printf("the value at generic pointer is %c \n",*(char*)ptr);
}
