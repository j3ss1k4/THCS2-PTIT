#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a;
		scanf("%lld",&a);
		for(int i=2; i<=a;i++)
		{
			while(a%i==0)
			{
				printf("%d ",i);
				a=a/i;
			}
		}
		printf("\n");
	}
	return 0;
}
