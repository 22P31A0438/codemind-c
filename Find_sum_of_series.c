#include<stdio.h>
int main()
{
    int n;
  double i,s=0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    s=s+1/i;
    }
    printf("%.2lf",s);
}