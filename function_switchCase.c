#include<stdio.h>
int sum(int a, int b);
int difference(int a, int b);

int main()
{
	int n1,n2;
	int x;
	
	printf("Enter the two numbers__ ");
	scanf("%d%d",&n1,&n2);
	printf("Enter 1 for sum and 2 for difference__  ");
	scanf("%d",&x);
	
		switch(x)
		{
			case 1: sum(n1,n2);
			printf("%d",n1+n2);
			break;
			case 2: difference(n1,n2);
			printf("%d",difference);
			break;
			default: printf("You entered wrong number");
			break;
		}
	return 0;
	
}

int sum (int a, int b)
{
	int result=0;
	result=a+b;
	return result;
}
int difference (int a, int b)
{
	int result=0;
	result=a-b;
	return result;
}
