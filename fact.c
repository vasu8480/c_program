#include<stdio.h>

int fact(int k)
{		
	if(k==0)
	{
		return 1;
	}
	return k*fact(k-1);
}



int main()
{
	int k,res;
	scanf("%d",&k);
	 res=fact(k);
	 printf("%d",res);
	 return 0;
	 
}
