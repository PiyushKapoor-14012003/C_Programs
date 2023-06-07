//To find max of three using functions
#include <stdio.h>
int find_max(int n1,int n2,int n3)
{
  return (n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
}
int main() 
{
  int n1,n2,n3;
  printf("Enter three to find maximum among them\n");
  scanf("%d %d %d",&n1,&n2,&n3);
  int max=find_max(n1,n2,n3);
  printf("Maximum of %d %d %d is %d ",n1,n2,n3,max);
  return 0;
}