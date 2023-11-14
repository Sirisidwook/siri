#include<stdio.h>
main()
{
	int a[3]={4,5,6};
	
	int *ptr[3], i;
	
	for(i=0; i<3;i++)
	{
		ptr[i]=&a[i];
	}
	printf(" prints the elements using pointer\n");
	for(i=0; i<3;i++)
	{
		printf("%d\n    ",ptr[i]);
	}
	
}
