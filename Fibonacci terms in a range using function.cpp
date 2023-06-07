//Program to print fibonacci terms in range using functions
#include<stdio.h>
void fibonacci(int start,int end)
{
	int f1=0,f2=1,f3;
	if(start==1)
	{
		printf("0 1 ");
	}
	for(int i=3;i<=end;i++)
	{
		f3=f1+f2;
		if(i>=start)
		printf("%d ",f3);
		f1=f2;
		f2=f3;
	}
}
int main()
{
	int start,end;
	printf("Enter range of fibonacci terms to be printed: ");
	scanf("%d %d",&start,&end);
	fibonacci(start,end);
}
