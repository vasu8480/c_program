#include<stdio.h>
int main()
{
	int i ,odd=0,marks[400],s,sum=0;
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<s;i++)
	{
		if(marks[i]%2==0)
		{
			sum+=1;
		}
		else{
			odd+=1;
		}
		
	}
	printf("%d %d",sum,odd);
	return 0;
}
