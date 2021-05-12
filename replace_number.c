#include <stdio.h>
void digitreplace(int n, int d, int r) 
{
   int res=0, k=1;
   int rem;
   while(n) 
   {
      rem = n%10;
      if(rem == d)
      
      	res = res + r* k;
      
      else
      
        res = res + rem * k;
        k*= 10;
        n=n/10;
      
   }
   printf("%d", res);
  
}
int main()
{
   int n,d ,r;
   scanf("%d %d %d",&n,&d,&r);
   digitreplace(n, d, r);
   return 0;
}
