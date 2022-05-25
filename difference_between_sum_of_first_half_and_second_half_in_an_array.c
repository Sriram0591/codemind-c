#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0,sum1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        sum+=arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        sum1+=arr[i];
    }
    if(sum1>sum)
    {
        printf("%d",sum1-sum);
    }
    else
    {
        printf("%d",sum-sum1);
    }
}