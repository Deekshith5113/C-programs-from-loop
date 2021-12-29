// 1-2+3-4+5-6+7-8+9.......n .
#include<stdio.h>
main()
{
	int i=1,n,s=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if (i%2==0)
		{
			s=s-i;
		}
		else
		{
			s=s+i;
		}
	}
	printf("The sum of the series is: %d",s);
}
