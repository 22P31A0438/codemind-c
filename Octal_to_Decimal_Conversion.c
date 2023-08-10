#include<stdio.h>
int octal(int n)
{
    int decimal=0;
    int base=1;
    int t=n;
    while(t)
    {
        int l=t%10;
        t=t/10;
     decimal +=l*base;
        base=base*8;
        }
        return decimal;
}
int main()
{
int octalnum;
scanf("%d",&octalnum);
printf("%d",octal(octalnum));
}
