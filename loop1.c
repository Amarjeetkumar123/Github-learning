//Write a program in C to display the multiplication table of a given integer.

#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the value which you need Table = ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=10;i++)
	{
		printf("%d X %d = %d\n",n,i,n*i);
	}
	getch();
}
