#include<stdio.h>
main()
{
	int arr[5]={1,3,4,5,8};
	int N=5;//total elements
    int i=0;// loop variable
	int index=3;// index location for entering the element
	int value=3;
	printf("\n printing thr elements of the array before insertion \n");
	for ( i=0; i<N;i++)
	{
		printf("%d", arr[i]);
	 }
// let us shift to right side
 for (i=N; i>=index;i--)
 {
 	arr[i+1]=arr[i];
 }
 
printf("\n printing the elements of the arry after insertion\n");
for( i=0; i<N; i++)
{
	printf("%d", arr[i]);
}

	 
}
