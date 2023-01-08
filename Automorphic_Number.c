#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,r,s,q;
    scanf("%d",&n);
    m=n*n;
    s=log10(n)+1;
    q=pow(10,s);
    r=m%q;
    if(r==n)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}