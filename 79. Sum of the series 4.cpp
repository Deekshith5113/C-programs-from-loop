//1/x^0+ 1/x^1+ 1/x^2+ 1/x^3 +....1/x^n .
#include<stdio.h>
#include<math.h>
main()
{
	float i,x,n,s=0;
	printf("Enter the number:");
	scanf("%f",&n);
	printf("Enter the value of x:");
	scanf("%f",&x);
	for(i=0;i<n;i++)
	{
		s=s+(1/pow(x,i));
	}
	printf("The sum of the series id : %f.3",s);
}
