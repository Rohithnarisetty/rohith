#include <stdio.h>
int prime(int a);
main()
{
	int a,b,c=0,i;
	printf("Enter The Number To Check Whether it is prime or not:");
	scanf("%d",&a);
	if(a==1)
	{
		printf("The Number Is Neither Prime Nor Composite");
	}
	else
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{
				c=1;
			}
		}
	}
	if(c==0)
	{
		printf("The Number Is Prime");
	}
	else
	{
		printf("The Number is composite");
	}
}
