#include<stdio.h>
void gen_fib(int num,int des)//3 4 5 6 7 8 9 10
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
		
		if(num==des)
		{
			printf("true");
		}
		else
		{
			printf("false");
		}

}
int main()
{
	int num,des;
	scanf("%d %d",&num,&des);//range
	gen_fib(num,des);
	return 0;
}
