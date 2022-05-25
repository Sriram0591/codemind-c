#include<stdio.h>
int main()
{
    int arr[100],n,i,rem,temp,sum,count=0,temp1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        temp=arr[i];
        temp1=arr[i];
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum*10+rem;
            temp=temp/10;
        }
        if(temp1==sum)
        {
            count++;
        }
        sum=0;
    }
    printf("%d",count);
}