#include<stdio.h>
int main(){
	long long a,dem=0;
	scanf("%lld",&a);
	while(a)
	{
		dem++;
		a=a/10;		
	}
	printf("%lld",dem);
	
	return 0;
}
