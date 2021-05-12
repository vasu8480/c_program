#include<stdio.h>
int keyfound(int n,int key)
{
	int r;
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r==key) 
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n,key,i;
	scanf("%d%d",&n,&key);
	i=keyfound(n,key);
	if(i)
	{
		printf("True");
	}
	else 
	{
	      printf("false");
	}
}
