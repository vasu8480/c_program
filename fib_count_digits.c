#include<stdio.h>
int gen_fib(int num)//3 4 5 6 7 8 9 10
{
	int a=0,b=1,i=2,c=0;
	if(num==0 || num==1)
	{
		return num+i;
		
	}
	
	while(c<num)
	{
		c=a+b;
		a=b;
		b=c;
		i+=1;
	}
	
	return (num==c)?i:0;
}

int main()
{
	int n, num,cou=0;
	scanf("%d",&num);//range
	if(n=gen_fib(num))
	{
		printf("%d",n);
	}
	else
	{
			printf("false");
	}
	return 0;
}
