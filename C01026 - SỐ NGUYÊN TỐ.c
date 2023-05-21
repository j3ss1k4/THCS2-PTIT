#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool check(long long x){
	if(x==0||x==1)
		return false;
	for(long long i=2; i<=sqrt(x);i++)
	{
		if(x%i==0)
			return false;
	}
	return true;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(check(n)==true)
			printf("YES\n");
		else
			printf("NO\n");
	}
}

