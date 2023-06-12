#include<stdio.h>
int main(){
	int a, tong = 0;
	scanf("%d",&a);
	int temp=a;
	while(a){
		int tich=1;
		int b=a%10;
		for(int i=1;i<=b;i++){
			tich=tich*i;
		}
		tong=tong+tich;
		a=a/10;
	}
	if(tong==temp)
		printf("1");
	else
		printf("0");
	return 0;
}
