#include<stdio.h>
int main()
{
		int i,j,p,q,z;
		p=0;
		q=0;
		printf("Enter number of voters:");
		scanf("%d",&z);
		while( z>0)
		{
				printf("Enter your age:");
				scanf("%d",&i);
				if(i>=18)
				{
						printf("President Candidate:-\n1.Alan\n2.Aakash");
						printf("\nEnter S.no to vote:");
						scanf("%d",&j);
						if(j==1)
						{
								p++;
						}
						else if(j==2)
						{
								q++;
						}
						else
						printf("Invalid Vote");
				}
				z--;
		}
		if(z==0 && p>q)
		printf("Alan Wins");
		else if( q>p)
		printf("Aakash Wins");
		else
		printf("Draw");
		return 0;
}
