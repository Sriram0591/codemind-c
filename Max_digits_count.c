#include<stdio.h>
int main()
{
    int arr[100],n,i,count=0,rem,p,c=0,temp=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        p=arr[i];
        if(p==0)
        {
            count=1;
        }
        while(p!=0)
        {
            rem=p%10;
            count++;
            p=p/10;
        }
        if(count>temp)
        {
            temp=count;
        }
        count=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        p=arr[i];
        while(p!=0)
        {
            count++;
            p=p/10;
        }
        if(count==temp)
        {
            c++;
        }
        count=0;
    }
    printf("%d",c);
}

        