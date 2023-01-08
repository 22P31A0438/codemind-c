#include<stdio.h>
int main()
{
    int m,r,i,n;
    scanf("%d%d%d",&n,&m,&r);
    for(i=m;i<=r;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}