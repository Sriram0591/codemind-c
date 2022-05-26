#include<stdio.h>
int main()
{
    int n,x,i,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        scanf("%d",&x);
        for(i=1;i<x;i++)
        {
            if((i*i)==x)
            {
                c=1;
                printf("True");
                break;
            }
            else
            {
                c=0;
            }
        }
        if(c==0)
        {
            printf("False");
        }
        n--;
    }
}
