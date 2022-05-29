#include<stdio.h>
int main()
{
    int n,temp,rem,rem1,count=0,s,temp1;
    scanf("%d",&n);
    temp=n;
    temp1=n;
    while(n!=0)
    {
        rem=n%10;
        while(temp!=0)
        {
            rem1=temp%10;
            if(rem1==rem)
            {
                count++;
            }
            temp=temp/10;
        }
        temp=temp1;
        if(count>1)
        {
        	s=1;
        	break;
		}
        n=n/10;
        count=0;
    }
    if(s==1)
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
}