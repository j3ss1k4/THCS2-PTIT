#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	scanf("%s",a);
	int n=strlen(a);
	printf("%c %c",a[0],a[n-1]);
}
