#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int le=0,chan=0;
	while(n){
		if(n%2)
			le++;
		else chan++;
		n/=10;
	}
	printf("%d %d",le,chan);
}
