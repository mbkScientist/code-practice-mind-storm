#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sum(int *arr,int n);
int *getPrimes(int n);
int isPrime(int x);

int main(int argc,char **argv)
{
	int n=10;
	if(argc=2)
		atoi(argv[2]);
	int *primes=getPrimes(n);
	int s=sum(primes,n);
	printf("The sum of first %d primes is %d\n",n,s);	
	return 0;
}

int sum(int *arr,int n)
{
	int i,total;
	for(i=0;i<n;i++)
		total=+arr[i];
}

int *getPrimes(int n)
{
	int i=0,x=2,result[n];
	while(i<n)
		if(isPrime(x))
		{
			result[i]=x;
			i++;
			x=+2;
		}					
	return result;
}	

int isPrime(int x)
{
	if(x%2==0)
		return 0;
	for(int i=3;i<=sqrt(x);i=+2)
		if(x%i==0)
			return 0;
	return 1;
}				