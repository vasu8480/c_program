#include <stdio.h> 
int disar(int n)
{  
    int l = 0;  
    while(n != 0)
	{  
        l = l + 1;  
        n = n/10;  
    }  
    return l;  
}  
   
int main()  
{  
    int num ,sum = 0, rem = 0, n;  
    scanf("%d",&num);
    int len = disar(num);  
    n = num;   
    while(num > 0){  
        rem = num%10;  
        sum = sum + (int)pow(rem,len);  
        num = num/10;  
        len--;  
    }   
    if(sum == n)  
        printf("%d  disarium", n);  
    else  
        printf("%d not disarium", n);  
   
    return 0;  
} 
