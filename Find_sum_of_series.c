#include<stdio.h>
int main()
{
    float n,i,sum=0,a;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        a=(1/i);
        sum+=a;
        
    }
    printf("%.2f",sum);
}