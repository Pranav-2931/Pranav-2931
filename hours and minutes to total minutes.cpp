#include<stdio.h>
int main()
{
	int h,m,hc,tm;
	printf("Enter hours : ");
	scanf("%d",&h);
	printf("Enter minutes : ");
	scanf("%d",&m);
	hc=h*60;
	tm=hc+m;
	printf("Total minutes is %d",tm);
	return 0;
}
