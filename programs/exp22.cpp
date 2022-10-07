#include<stdio.h>
int main()
{
	int n,a[100],i,j;
	printf("enter the number you want to convert:");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{                                                                                                        
		a[i]=n%8;
		n/=8;
	}
	printf("octal");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	printf("\n");
	return 0;
}
