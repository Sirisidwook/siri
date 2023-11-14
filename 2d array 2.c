#include<stdio.h>
main()
{  int i,j,m,n,k,l;
   int a[3][3],b[3][3],c[3][3];
   printf(" enter values array1\n : ");
   for(i=0;i<3;i++)
   	{
   		for(j=0;j<3;j++)
   		{
   			scanf("%d",&a[i][j]);
		   }
	   }
	   for(i=0;i<3;i++)
	   {
	   	for(j=0;j<3;j++){
	   		printf(" %d ",a[i][j]);
	   		
		   }
		   printf("\n");
	   }

 printf(" enter values array2\n : ");
   for(m=0;m<3;m++)
   	{
   		for(n=0;n<3;n++)
   		{
   		scanf("%d",&b[m][n]);
		   }
	   }for(m=0;m<3;m++)
	   {
	   	for(n=0;n<3;n++){
	   		printf(" %d ",b[m][n]);
	   		
		   }
		   printf("\n");
	}
	   printf("the sum of the elements of the array \n");
	   for(k=0;k<3;k++)
	   {
	   	for(l=0;l<3;l++)
		   {
	   	c[k][l]=a[i][j]+b[m][n];
		   }
		   {
		   scanf("%d",&c[k][l]);}
		    for(k=0;k<3;k++)
	   {
	   	for(l=0;l<3;l++){
	   		printf(" %d ",c[k][l]);
	   		
		   }
		   
		}
		   printf("\n");
	   }
}

