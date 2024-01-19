#include<stdio.h>
void main()
{
	int a,b;
	char c;
	printf("Enter your choice(+ - / * %)");
	scanf("%s",&c);
	printf("Enter any two numbers\n");
	scanf("%d %d",&a,&b);
	switch(c)
	{
		case '+':
		printf("addition:%d",a+b);
		break;
		case '-':
		printf("subtraction:%d",a-b);
		break;
		case '/':
		printf("division:%d",a/b);
		break;
		case '*':
		printf("multiplication:%d",a*b);
		break;
		case '%':
		printf("remainder:%d",a%b);
		break;
		default:
			printf("Error");
	}
}
