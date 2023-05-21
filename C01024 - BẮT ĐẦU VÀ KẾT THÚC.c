#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long n,sd,sc,a;
		scanf("%ld",&n);
		long long sum=0;
		sc=n%10;
		while(n)
		{   
			a=n%10;
			n/=10;			
		}
		sd=a;
		if(sd==sc)
			printf("YES\n");
		else
			printf("NO\n");
			
	}
}
