/*
datatype classification : premitive data -type(buit in datatypes) and 
derived data types(user defined datatypes)
code for array
a=(3, 5, 8, 10) one dimensional array
a=[ao,a1,a2,a3]
declaration: datatype variablename[array-size]
*/

#include<stdio.h>
void main()
{
	int a[4], i, sum = 0;
	printf("Enter the values into the array-----------");
	for(i=0; i<=3; i++)
	{
		printf("\nEnter %d position into the array. ", i+1);
		scanf("%d",&a[i]);
	}
	printf("\n\nentered number are -------\n");
	for(i=0; i<4; i++)
	{
		printf("\t%d", a[i]);
	}
	for(i=0; i<4; i++)
	{
	     sum = sum + a[i];
	}
	printf("\nsum of the entered number is %d",sum);
	
}
