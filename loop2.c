#include<stdio.h>
void main()
{
	int i,n,j;
	printf("Enter the value which you need Table 1 to = ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++){
			printf("%d X %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
	getch();
}
