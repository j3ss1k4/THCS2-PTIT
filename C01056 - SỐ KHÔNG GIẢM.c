#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long a;
		scanf("%lld",&a);
		while(a)
		{
			int b=a%10;
			a/=10;
			int c=a%10;
			if(b<c)
			{
				printf("NO\n");
				break;
			}	
		}
		if(a==0)
			printf("YES\n");
	}
}
