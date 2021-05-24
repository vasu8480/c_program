#include<stdio.h>
int pronic(num)
{
   int k=0,i;
   for(i=0;i<=num;i++)
   {
       if(i*(i+1)==num)
       {
           k=1;
           break;
       }
   }

}

int main()
{
	int num,t,i,k=0;
	scanf("%d",&t);
	for(i=0;i<=t;i++)
	{
		scanf("%d",&num);
		if(pronic(num))
		{
   			 printf("pronic Num");
		}
   		else
    		printf("not pronic Num");
	}
	return 0;
}
