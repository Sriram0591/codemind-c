#include<stdio.h>
int main()
{
    int n,i,a,b,rem,count=0,temp;
    scanf("%d",&n);
    while(n!=0)
    {
        scanf("%d %d",&a,&b);
        for(i=a;i<=b;i++)
        {
            temp=i;
            rem=temp%10;
            if(rem==2||rem==3||rem==9)
            {
                count++;
            }
        }
        printf("%d
",count);
        count=0;
        n--;
    }
}