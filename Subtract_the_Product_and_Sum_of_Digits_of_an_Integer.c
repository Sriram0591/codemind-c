#include<stdio.h>
int main()
{
    int n,r,sum=0,prod=1,ans;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        prod=prod*r;
        n=n/10;
    }
    ans=prod-sum;
    printf("%d",ans);
    
    
}