#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i;
    float r,a=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        r=sqrt(i);
        a=a+r;
    }
    printf("%.2f",a);
}