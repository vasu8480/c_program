#include<stdio.h>
int find_even(int n)
{
	int c,a=0,b=1,co=1;
	if(n==1)
	{
		return ;
	}
	else if(n==2)
	{
		return 1;
	}
	while(co!=n-2)
	{
		c=a+b;
		a=b;
		b=c;
		co++;
	
	}
	return c;
}

int main()
{
	int num,n,des;
	scanf("%d %d",&des,&num);
	n=find_even(num);
	printf("%d",n);
	return 0;
	
	
}
