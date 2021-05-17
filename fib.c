#include<stdio.h>
void gen_fib(int num)//3 4 5 6 7 8 9 10
{
	int a=0,b=1,i,c;
	if(num==0)
		{
			return;
		}
	if(num==1)
		{
			printf("%d",a);
			return;
		}
	printf("%d %d ",a,b);//
	for(i=3;i<=num;i++)
		{
			c=a+b;
			a=b;
			b=c;
		printf("%d ",c);
		}
}
int main()
{
	int num;
	scanf("%d",&num);//range
	gen_fib(num);
	//fun call: name: gen_fib argscount:1 argsdatype:int
	// no return ---> void
	return 0;
}
