#include<stdio.h>
int main(){
	long a, tong = 0;
	scanf("%ld",&a);
	for(int i=1;i<a;i++)
	{
		if(a%i==0)
			tong=tong+i;
	}
	if(tong==a)
		printf("1");
	else
		printf("0");
	
	return 0;
}
