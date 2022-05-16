#include<stdio.h>
int main()
{
    int x,y,sum=0;
    scanf("%d %d",&x,&y);
    sum=x+y;
    if((x%2==0) && ((y%2==0) || (x>0)))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}