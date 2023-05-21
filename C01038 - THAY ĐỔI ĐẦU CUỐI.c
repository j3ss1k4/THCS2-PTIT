#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	scanf("%s",a);
	int n=strlen(a);
	int temp=a[0];
	a[0]=a[n-1];
	a[n-1]=temp;
	if(a[0]=='0')
	{
		for(int i=0;i<n;i++)
			a[i]=a[i+1];
		n--;
	}
	puts(a);
}
