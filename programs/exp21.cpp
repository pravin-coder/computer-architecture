#include<stdio.h>
int main()
{
	int n,a[100],i,j;
	printf("enter the number you want to convert:");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{                                                                                                        
		a[i]=n%2;
		n/=2;
	}
	printf("binary");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	printf("\n");
	return 0;
}
