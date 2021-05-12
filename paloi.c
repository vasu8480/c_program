#include<stdio.h>
int sum(int num)
{
	int su=0 ,rem=0;
	while(num)
	{
		rem=num%10;
		su=su+rem;
		num=num/10;
	}
	return su; 
}
int main()
{
	int num,res;
	scanf("%d",&num);
	printf("%d",sum(num));
	return 0;
}
