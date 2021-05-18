#include<stdio.h>
void gen_fib(int num)//3 4 5 6 7 8 9 10
{
	int a=0,b=1,k,c=0;
	if(num==0 || num==1)
	{
		printf("true");
		
	}
	
	
	while(c<=num)
	{
		k=c;
		c=a+b;
		a=b;
		b=c;
	}
	if(num==c)
		{
			printf("true");
		}
	 if((c-num)>(num-k))
	       {
				printf("%d",k);
		    }
	else if((c-num)<(k-num))
    		{
				printf("%d",c);
			}
	else
			{
				printf("%d %d",k,c);
			}
     	}


int main()
{
	int num;
	scanf("%d",&num);//range
	gen_fib(num);
	return 0;
}
