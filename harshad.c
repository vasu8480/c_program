#include<stdio.h>
int main()
{
    int number,temp,sum = 0, digit, res;
    scanf("%d",&number);
    temp = number;
   while(temp!=0)
   {
        digit=temp % 10;
     
        sum = sum + digit;
        temp = temp / 10;
   }
   res = number % sum;
   if(res == 0)
       printf("%d is Harshad Number",number);
   else
      printf("%d is not Harshad Number",number);
  return 0;
} 
