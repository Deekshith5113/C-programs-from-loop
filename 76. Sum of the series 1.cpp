// 1+ 1/2+ 1/3+ 1/4.........+1/n .
#include<stdio.h>
main()
{
	float i,n,s=0;
	printf("Enter the number:");
	scanf("%f",&n);
	for (i=1;i<=n;i++)
	{
		s=s+(1/i);
	}
	printf("The sum of the series is : %.3f",s);
}
