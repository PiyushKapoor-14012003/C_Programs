#include <stdio.h>
int main() 
{
    int n,i ,pos=-1,ele,mid,start,end;
	printf("Enter number of elements in array: ");
	scanf("%d",&n);
	int ar[n];
	printf("Enter elements in array in sorted manner:\n");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	printf("Enter element to be deleted: ");
	scanf("%d",&ele);
	start=0,end=n-1;
	//mid=(start+end)/2;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(ar[mid]==ele)
		{
			pos=mid;
			break;
		}
		else if(ar[mid]<ele)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	if(pos!=-1)
	{
		for(i=pos;i<n-1;i++)
			ar[i]=ar[i+1];
		printf("Array after deletion of elements:\n");
		for(i=0;i<n-1;i++)
			printf("%d ",ar[i]);
	}
	else
		printf("Element not found");
	return 0;
}