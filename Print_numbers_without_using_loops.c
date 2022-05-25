#include <stdio.h>
 
void printNumber(int i, int N);
int main()
{
    int n;
    scanf("%d", &n);
    if(n==0)
    {
        printf("The Number Series is Not Possible Print");
    }
    else
    {
        if(n>=1 && n<=10000)
        {
            printNumber(1,n);
        }
        else
        {
            printf("The Number Series is Not Possible Print");
        }
    }
    return 0;
}
 
void printNumber(int i, int n)
{
    if(i <= n)
	{
         printf("%d ", i);
         printNumber(i + 1, n);
    }
}