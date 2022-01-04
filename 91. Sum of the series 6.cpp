// x^1/1! + x^2/2! + x^3/3! + ....... x^n/n!
#include<stdio.h>
#include<math.h>
main()
{
	float x,i,n,f,j,s=0;
	printf("Enter the value of x : ");
	scanf("%f",&x);
	printf("Enter the number of terms : ");
	scanf("%f",&n);
	for (i=1;i<=n;i++)
	{
		f=1;
		for(j=1;j<=i;j++)
		{
			f=f*j;
		}
		s=s+(pow(x,i)/f);
	}
	printf("The sum of the series is %f",s);
}
