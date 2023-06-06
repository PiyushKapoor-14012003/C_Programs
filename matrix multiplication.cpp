#include<stdio.h>
int main()
{
	int r1,c1,r2,c2;
	scanf("%d %d",&r1,&c1);
	scanf("%d %d",&r2,&c2);
	int ar1[r1][c1];
	int ar2[r2][c2];
	int result[r1][c2];
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		scanf("%d",&ar1[i][j]);
	}
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		scanf("%d",&ar2[i][j]);
	}
	if(c1==r2)
	{
		int sum=0;
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				for(int k=0;k<r2;k++)
				{
					sum+=ar1[i][k]*ar2[k][j];
				}
				result[i][j]=sum;
				sum=0;
			}
		}
		
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			printf("%d ",result[i][j]);
			printf("\n");
			
		}
	}
}