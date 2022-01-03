// Prime numbers from 1 to n ...
#include<stdio.h>
main()
{
	int i,j,n,f;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("The prime numbers from 1 to n are:\n");
	for (i=2;i<=n;i++)
	{
		f=0;
		for (j=1;j<=i;j++)
		{
			if (i%j==0)
			{
				f=f+1;
			}
		}
		if (f==2)
		{
			printf("  %3d\t",i);
		}
	}
}
