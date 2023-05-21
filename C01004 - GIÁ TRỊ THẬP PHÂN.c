#include <stdio.h>
int main()
{
   int test;
   scanf("%d",&test);
   while(test--){
   	  long long a;
      scanf("%lld",&a);
      printf("%.15lf\n",(double)1/a);
   }
   return 0;
}
