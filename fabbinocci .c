#include <stdio.h>
main()
{
	int a=0,b=1,c=0,d,i;
	printf("Enter The Range to print Fabinocci:");
	scanf("%d",&d);
	for(i=0;i<d;i++)
	{
		printf("%d,",a);
		a=b+c;
		b=c;
		c=a;
	}
}
