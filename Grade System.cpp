#include<stdio.h>
int main()
{
	int maths,english,physics,chemistry,avg;
	printf("Enter marks of maths : ");
	scanf("%d",&maths);
	printf("Enter marks of english : ");
	scanf("%d",&english);
	printf("Enter marks of physics : ");
	scanf("%d",&physics);
	printf("Enter marks of chemistry : ");
	scanf("%d",&chemistry);
	avg=(maths+english+physics+chemistry)/4;
	if(avg>=95)
	{
		printf("Your grade is A+");
	}
	else if(avg>=90)
	{
		printf("Your grade is A");
	}
	else if(avg>=80)
	{
		printf("Your grade is B");
	}
	else if(avg<=70)
	{
		printf("Your grade is C");
	}
	else if(avg<=60)
	{
		printf("Your grade is D");
	}
	else
	{
		printf("Your grade is E");
	}
}
