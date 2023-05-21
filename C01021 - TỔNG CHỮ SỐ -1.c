#include<stdio.h>
int main(){
	long n;
	scanf("%ld",&n);
	long sum=n%10;
	while(n/10)
	{
		n/=10;
		sum+=n%10;
	
	}
	printf("%ld ",sum);		
}
