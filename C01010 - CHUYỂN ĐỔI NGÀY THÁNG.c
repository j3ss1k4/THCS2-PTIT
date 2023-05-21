#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int year, week,day;
	year=n/365;
	week=(n-year*365)/7;
	day=n-year*365-week*7;
	printf("%d %d %d", year, week,day);
}
