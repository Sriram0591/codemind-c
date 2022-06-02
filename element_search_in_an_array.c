#include<stdio.h>
int main()
{
    int arr[100],n,i,se,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
         if(arr[i]==se)
         {
             printf("True");
             s=1;
             break;
         }
    }
    if(s==0)
    {
        printf("False");
    }
}