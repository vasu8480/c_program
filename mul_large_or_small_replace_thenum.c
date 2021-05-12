#include<stdio.h>
int main()
{
	int num,i,r1,r2,t;
	scanf("%d%d%d", &num,&r1,&r2);
	if(r1>r2)
	{
		t=r1;
		r1=r2;
		r2=t;
	}
	for(i=r1;i<=r2;i++)
	{
		printf("%d x%d =%d\n",num,i,i*num);
	}
}
