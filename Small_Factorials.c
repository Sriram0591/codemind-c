#include<stdio.h>
int main()
{
	int arr[100],i,n,fact=1,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		for(j=1;j<=arr[i];j++)
		{
			fact=fact*j;
		}
		printf("%d
",fact);
		fact=1;	
	}
}