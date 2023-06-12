#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int t=n;
	for(int i=1;i<=n;i++)
	{
		if(t)
		{
			for(int i=1; i<t;i++)
				printf("~");
			t--;	
		}
		for(int j=1;j<=n;j++)
		{
			if(i==1||j==1||j==n||i==n)
				printf("*");
			else
				printf(".");
		}
		printf("\n");
	}
}
