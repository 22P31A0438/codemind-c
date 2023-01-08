#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i;
    float a,r=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        a=sqrt(i);
        r=r+a;
    }
    printf("%.2f",r);
}