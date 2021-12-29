//x+ x/2 +x/3 +x/4....+x/n .
#include<stdio.h>
main()
{
	float i,x,n,s=0;
	printf("Enter the number:");
	scanf("%f",&n);
	printf("Enter the value of x:");
	scanf("%f",&x);
	for (i=1;i<=n;i++)
	{
		s=s+(x/i);
	}
	printf("The sum of the series is: %.3f",s);
}
