#include<stdio.h>
int main()
{
    int a,b,rem,sum,i,temp;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
    	temp=i;
    	sum=0;
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum*10+rem;
            temp=temp/10;
        }
        if(sum==i)
        {
        	printf("%d ",i);
		}
    }
    return 0;
}