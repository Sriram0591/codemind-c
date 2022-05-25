#include<stdio.h>
int main()
{
    int a[100],n,i,j,k,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j = i+1; j < n; j++)
       {
            if(a[i] == a[j])
            {
                for(k = j; k <n; k++)
                {
                    a[k] = a[k+1];
                }
                j--;
                n--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
       if(a[i]%2==1)
       {
           count++;
       }
    }
    printf("%d",count);
    
}