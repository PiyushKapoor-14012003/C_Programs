#include <stdio.h>
#include<math.h>
int check_prime(int num)
{
  int count=0;
  for(int i=2;i<=sqrt(num);i++)
    if(num%i==0)
    {
      count=1;
      break;
    }
  if(num<2)
    count=1;
  return count;
}
int main()
{
  int num;
  printf("Enter number tob checked: ");
  scanf("%d",&num);
  int count=check_prime(num);
  if(count==0)
    printf("%d is Prime Number",num);
  else
    printf("%d is not prime Number",num);
  return 0;
}