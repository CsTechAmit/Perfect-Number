// 1+2+3=6
#include<stdio.h>
main()
{
	int n,i,sum=0;
	printf("enter the number :");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{	
		sum=sum+i;
	}
	}
	if (sum==n)
	printf("enter the number is perfect");
	else
	printf("the is not perfact number");
}
