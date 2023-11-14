#include<stdio.h>
main()
{   int i,j ;
	int a[2][2];
	printf("enter values: ");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
	{
	
			
		scanf("%d",&a[i][j]);
	}
}
	 
	
	
	printf("show the elements of the arrays \n");

	 for(i=0;i<2;i++)// outer loop is for rows
	{
		for (j=0;j<2;j++)// inner loop for columns
	 
		{
			printf("%d",a[i][j]);
			
	
		}
	printf("\n");
	}
	
	
	
	
}
