#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long a;
		scanf("%ld",&a);
		int b=sqrt(a);
		if(b*b!=(float)a)
			printf("NO\n");
		else
			printf("YES\n");
	}
}
