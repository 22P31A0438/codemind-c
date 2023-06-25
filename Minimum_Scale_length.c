#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b,c,d,e,f,m=0,i;
    for(b=0;b<n;b++)
    {
        scanf("%d",&a[b]);
    }
    m=a[i];
    for(c=0;c<n;c++)
    {
        if(a[c]<m)
        {
            m=a[c];
        }
    }
    for(m;m>0;m--)
    {
        i=0;
        for(d=0;d<n;d++)
        {
        if(a[d]%m==0)
        {
            i++;
        }
    }
    if(i==n)
    {
        printf("%d",m);
        break;
    }
}
}