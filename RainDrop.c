#include<stdio.h>
int main()
{
    int n,c=0,c1=0,c2=0;
    scanf("%d",&n);
    if(n%3==0)
    {
        c++;
        printf("Pling");
    }
    if(n%5==0)
    {
        c1++;
        printf("Plang");
    }
    if(n%7==0)
    {
        c2++;
        printf("Plong");
    }
    if(c==0&&c1==0&&c2==0)
    {
        printf("%d",n);
    }
}