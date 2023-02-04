#include <stdio.h>
main()
{
	int a,b,c;
	printf("Enter The Year To Check Whether It is a leap year:");
	scanf("%d",&a);
	if(a%100==0)
	{
		if(a%400==0)
		{
			printf("The Entered Year Is a leap year:");
		}
		else
		{
			printf("The Entered Year Is not a leap year:");
		}
	}
	else
	{
		if(a%4==0)
		{
			printf("%d is a leap year",a);
		}
		else
		{
			printf("%d is not a leap year",a);
		}
	}
}
