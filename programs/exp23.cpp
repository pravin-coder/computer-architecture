#include<stdio.h>
#include<math.h>
int convert(long long n);
int main()
{
	long long n;
	printf("enter the binary number");
	scanf("%lld",&n);
	printf("decimal value: %d",convert(n));
	return 0;
}
int convert(long long n)
{
	int rem,i=0,dec=0;
	while(n!=0)
	{
		rem=n%10;
		n/=10;
		dec+=rem*pow(2,i);
		i++;
	}
	return dec;
}
