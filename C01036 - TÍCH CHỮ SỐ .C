#include<stdio.h>
int main(){
	long long a,tich=1;
	scanf("%lld",&a);
	while(a)
	{
		tich=tich*(a%10);
		a=a/10;		
	}
	printf("%lld",tich);
	
	return 0;
}
