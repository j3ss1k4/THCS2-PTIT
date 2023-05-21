#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long n;
		scanf("%ld",&n);
		long sum=0;
		while(n)
		{
			sum+=n%10;
			n/=10;			
		}
		printf("%ld\n",sum);	
	}
}
