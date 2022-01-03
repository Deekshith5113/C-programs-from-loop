// Factorial of numbers from 1 to n ...
#include<stdio.h>
main()
{
	int i,j,n,f;
	printf("Enter the number:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		f=1;
		for (j=1;j<=i;j++)
		{
			f=j*f;
		}
		printf("  %10d\n",f);
	}
}
