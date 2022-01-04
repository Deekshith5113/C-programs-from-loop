// Decimal number to binary number..
#include<stdio.h>
main()
{
	int n;
	printf("Enter the decimal number : ");
	scanf("%d",&n);
	int r,i,b=0;
	for(i=1;n!=0;i=i*10)
	{
		r=n%2;
		b=b+r*i;
		n=n/2;
	}
	printf("The binary number is %d ",b);
}
