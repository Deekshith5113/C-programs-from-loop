//Check whether a number is strong number or  not
#include<stdio.h>
main()
{
	int i,x,s=0,n,f,k;
	printf("Enter the number:");
	scanf("%d",&n);
	k=n;
	while (n!=0)
	{
		x=n%10;
		f=1;
		for (i=1;i<=x;i++)
		{
			f=f*i;
		}
		s=f+s;
		n=n/10;	
	}
	if (s==k)
	{
		printf("The number %d is a strong number",k);
	}
	else
	{
		printf("The number %d is not a strong number",k);
	}
}
