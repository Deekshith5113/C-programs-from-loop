// Sum of factorial in a given range...
#include<stdio.h>
main()
{
	int i,j,n,f,l,s=0;
	printf("Enter the lower limit:");
	scanf("%d",&l);
	printf("Enter the Upper limit:");
	scanf("%d",&n);
	for (i=l;i<=n;i++)
	{
		f=1;
		for (j=1;j<=i;j++)
		{
			f=j*f;
		}
		s=f+s;
	}
	printf("The sum of the factorials from the range %d to %d is: %d",l,n,s);
}

