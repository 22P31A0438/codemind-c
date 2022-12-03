#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
    for(int r=1;r<=i;r++)
    {
    printf("*");
    }
    printf("
");
 }
 return 0;
}