#include<stdio.h>
#include<math.h>
int main()
{
int n,s=1,i;
scanf("%d",&n);
for(i=1;i<n;i++)
{
  if(n%i==0)
  {
  s=s+i;
  }
}
if(s>n)
{
printf("True");
}
else
{
    printf("False");
}
}