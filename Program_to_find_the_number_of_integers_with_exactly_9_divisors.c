#include<stdio.h>
int main()
{
    int n,i,j,count=0,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==9)
        {
            c++;
            printf("%d ",i);
        }
        count=0;
    }
    printf("
Total=%d",c);
}