#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter any two number");
	scanf("%d %d",&a,&b);
	c=a&b;
	printf("\nAnd operator result:%d",c);
	c=~a;
	printf("\nComplement operator ans:%d",c);
}
