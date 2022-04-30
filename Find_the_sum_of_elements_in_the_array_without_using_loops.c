#include<stdio.h>
int main()
{
    int arr[100],size,i,sum=0;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    if(size<=30)
    {
       printf("%d",sum); 
    }
    else
    {
    	printf("Enter a valid number");
	}
}