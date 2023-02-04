#include <stdio.h>
main()
{
	int a,b,c,d;
	char e[2];
	printf("Enter The Length Of Rectangle:");
	scanf("%d",&a);
	printf("Enter The Breadth Of Rectangle:");
	scanf("%d",&b);
	printf("Enter The Character To Print:");
	scanf("%s",&e);
	for(c=0;c<b;c++)
	{
		for(d=0;d<a;d++)
		{
			printf("%s",e);
		}
		printf("\n");
	}
}
