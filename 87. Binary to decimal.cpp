//Binary number to Decimal number...
#include<stdio.h>
#include<math.h>
main()
{
	int n,i,s=0,r;
	printf("Enter the binary number: ");
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	{
		r=n%10;
		s=s+r*pow(2,i);
		n=n/10;
	}
	printf("The decimal number is %d",s);
}
