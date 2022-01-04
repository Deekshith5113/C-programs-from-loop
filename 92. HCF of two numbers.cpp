// H.C.F or Greatest common divisor of two numbers...
#include<stdio.h>
main()
{
	int a,b,i,g;
	printf("Enter the two numbers a and b: ");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a&&i<=b;i++)
	{
		if((a%i==0)&&(b%i==0))
		{
			g=i;
		}
	}
	printf("The highest common factor is %d",g);
}
