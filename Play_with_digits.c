#include<stdio.h>
int main()
{
    int arr[100],n,i,temp,rem,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        temp=arr[i];
        while(temp!=0)
        {
            rem=temp%10;
            sum+=rem;
            temp=temp/10;
        }
    }
    printf("%d",sum);
    
}