#include<stdio.h>
int main()
{
    int n,m,r,a,i,s=0;
    scanf("%d%d%d%d",&n,&m,&r,&a);
    for(i=n;i<=m;i++)
    {
        if(i%r==0&&i%a!=0)
        s=s+i;
    }
    printf("%d",s);
}