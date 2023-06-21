#include<stdio.h>
#include<math.h>
int main()
{
	int n,md=999999,x,y,p=-1;
	int i;
	printf("Enter length of array ");
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
	printf("Enter  x and y ");
	scanf("%d %d",&x,&y);
	for(i=0;i<n;i++)
	{
		if(ar[i]==x||ar[i]==y)
		{
			p=i;
			break;
		}
	}
	/*i++;1
3
5
6
7
6
5
3*/
	for(;i<n;i++)
	{
		if(ar[i]==x||ar[i]==y)
		{
			if(ar[i]!=ar[p]&&md>abs(i-p))
			{
				md=abs(i-p);
				p=i;
			}
			else
				p=i;
		}
		
	}
	if(md>n)
	printf("Number not found ");
	else
	printf("%d",md);
}
