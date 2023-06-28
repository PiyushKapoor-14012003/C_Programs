#include<stdio.h>
int main()
{
	int n,i,num,pos;
	printf("Enter  number of elements in array :");
	scanf("%d",&n);
	int ar[n+1];
	printf("Enter elements in array\n");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	printf("Entered array is: \n");
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
	printf("\nEnter number to be inserted and position to be inserted :");
	scanf("%d %d",&num,&pos);
	for(i=n-1;i>=pos-1;i--)
		ar[i+1]=ar[i];
	ar[pos-1]=num;
	printf("Array after insertion of %d at %d\n",num,pos);
	for(i=0;i<n+1;i++)
		printf("%d ",ar[i]);
	return 0;
}