#include<stdio.h>
int main()
{
    int arr[100],n,i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<1000;j++)
        {
            if(j*j==arr[i])
            {
                sum+=arr[i];
                continue;
            }
        }
    }
    printf("%d",sum);
}