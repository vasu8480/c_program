#include<stdio.h>
int rev(int num)
{
	int r,res=0,t,n;
	while(n)
	{
		r=n%10;
		n=n/10;
		res=res*10+r;
	}
	return res;
}
void even_odd(int num)
{
	int r,e=0,o=0,res;
	while(num)
	{
		r=num%10;
		num=num/10;
		
		if(r%2)
		{
			o=o*10+r;
			
		}
		else
		{
			e=e*10+r;
		}
		
	}
	o=rev(o);
	printf("%d %d",e,o);
}
int main()
{
	int num,res;
	scanf("%d",&num);
	num=reverse(num);
	even_odd(num);
	printf("%d",num);
	return 0;
}
