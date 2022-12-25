#include<stdio.h>
int main()
{
    int n,a,i=0;
    int m,r;
    scanf("%d%d",&n,&a);
    for(i=0;i<a;i++)
    {
        scanf("%d%d",&r,&m);
        if(r<n||m<n)
        printf("UPLOAD ANOTHER
");
        else if(r==m)
        printf("ACCEPTED
");
        else if(r>n||m>n)
        printf("CROP IT
");
    }
}