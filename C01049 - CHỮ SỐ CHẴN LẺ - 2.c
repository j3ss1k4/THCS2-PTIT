#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a, chan = 0, le=0;
		scanf("%d",&a);
		while(a){
			int b=a%10;
			if(b%2==0)
				chan+=1;
			else
				le+=1;
			a=a/10;
		}
		
		printf("%d %d\n",le,chan);
		}
	return 0;
}
