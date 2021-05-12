#include <stdio.h>
int digitreplace(int n, int digit, int replace) {
   int res=0, d=1;
   int rem;
   while(n) {
      rem = n%10;
      if(rem == digit)
      
      	res = res + replace * d;
	  
	  else
	  
	  	res = res + rem * d;
        d *= 10;
        n /= 10;
	  
}
   printf("%d\n", res);
      return 0;
}

int main() {
   int n,digit ,replace ;
   scanf("%d %d %d",&n,&digit,&replace);
   digitreplace(n, digit, replace);
   return 0;
}
