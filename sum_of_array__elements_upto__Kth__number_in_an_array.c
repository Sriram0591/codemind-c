#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
}