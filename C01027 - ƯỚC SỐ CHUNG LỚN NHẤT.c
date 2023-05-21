#include<stdio.h>
void ucln(long x, long y){
	if(x==y)
		printf("%ld\n",x);
	else
	{
		while(x!=y)
		{
			if(x>y)
				x=x-y;
			else
				y=y-x;
		}
		printf("%ld\n",x);
	}
	 
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long a,b;
		scanf("%ld%ld",&a,&b);
		ucln(a,b);
	}
	return 0;
}
