#include <stdio.h>
#include <string.h>
#include <math.h>                                              
#include <stdlib.h>
int check_smart(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
        if(n%i==0)
            count++;
    return (count%2==0?0:1);
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,num;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&num);
        if(check_smart(num))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
