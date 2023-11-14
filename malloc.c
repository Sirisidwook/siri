//Malloc
#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p, n ,i;
	printf("enter the numbers of the integers to be used");
	scanf("%d",&n);
	p= (int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf(" no mrmory availbe");
		exit(1);
}
	else
	{
		printf("memory allocation was successsful\n");
		printf("enter the value\n");
		for (i=0;i<n;i++)	
		{
			scanf("%d",p+i);
		}
		for(i=0;i<n;i++)
		{
			printf("%D \n",*(p+i));
		}
		}
}

