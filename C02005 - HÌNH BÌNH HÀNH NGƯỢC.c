#include<stdio.h>
int main(){
	int hang,cot;
	scanf("%d%d",&hang,&cot);
	int t=hang;
	for(int i=1;i<=hang;i++)
	{
		if(i<=t)
		{
			for(int k=1;k<i;k++)
				printf("~");
			
		}
			
		for(int j=1;j<=cot;j++)
		{
			
				printf("*");
			
		}
		printf("\n");
	}
}
