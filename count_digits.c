#include<stdio.h>
int main()
{
    int arr[100],n,i,count=0,rem,p;
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
        printf("%d ",count);
        count=0;
    }
}