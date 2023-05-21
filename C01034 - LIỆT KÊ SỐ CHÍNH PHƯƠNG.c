#include<stdio.h>
#include<math.h>
int main(){
	int m,n,dem=0;
	scanf("%d%d",&m,&n);
	int x=sqrt(m);
	int y=sqrt(n);
	
	if(x*x<m)
	{
		printf("%d\n",y-x);
		for(int i=x+1;i<=y;i++)
		{
			printf("%d\n",i*i);
		}
	}
	else {
		printf("%d\n",y-x+1);
		for(int i=x;i<=y;i++)
		{
			printf("%d\n",i*i);
		}
	}

}
