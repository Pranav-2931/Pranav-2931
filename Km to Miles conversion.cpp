#include<stdio.h>
int main()
{
	int k,m;
	printf("Enter kilometers to convert : ");
	scanf("%d",&k);
	m=k*0.621371;
	printf("%d kilometers is %d miles",k,m);
	return 0;
}
