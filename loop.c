//Write a program in C to display the cube of the number upto given an integer. 

#include<stdio.h>

void main()
{
	int i,n,cube;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		cube= i*i*i;
		printf("Number is: %d and Cube of number %d is: %d \n",i,i,cube);
	
	}
	getch();
}
