#include<stdio.h>
int main()
{
	int n,w,h,l;
	scanf("%d",&l);
	scanf("%d",&n);
	while(n!=0)
	{
		scanf("%d %d",&w,&h);
		if(w<l||h<l)
		{
			printf("UPLOAD ANOTHER
");
		}
		else if(w==l && h==l || w==h)
		{
			printf("ACCEPTED
");
		}
		else
		{
			printf("CROP IT
");
		}
		n--;
	}
}