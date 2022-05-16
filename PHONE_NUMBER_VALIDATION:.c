#include<stdio.h>
int main()
{
	long long n,c=0;
	scanf("%lld",&n);
	while(n)
	{
		n=n/10;
		c++;
	}
	
	if(c==10)
	{
		printf("Valid");
	}
	else
	{
		printf("Invalid");
	}
}