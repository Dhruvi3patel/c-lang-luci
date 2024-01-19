#include<stdio.h>
void main()
{
	int n1,n2,max;
	printf("Enter any two number");
	scanf("%d %d",&n1,&n2);
	max=(n1>n2)?n1:n2;
	printf("max=%d",max);
}
