#include<stdio.h>
int main()
{
    int arr[100],size,i,sum=0;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    
}