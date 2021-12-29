/* Pattern 1
	1
	2 2
	3 3 3
	4 4 4 4
*/	
#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf(" %3d",i);
		}
		printf("\n");
	}
}
