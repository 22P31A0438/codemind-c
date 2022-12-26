#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,r,s,d;
    scanf("%d%d%d",&n,&m,&r);
   s=pow(n,m);
   d=s%r;
printf("%d",d);
}