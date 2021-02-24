#include"myutils.h"
#include <stdio.h>
#include <stdarg.h>



int factorial(int number)
{
    int i,fact=1;       
    for(i=1;i<=number;i++)
    {    
        fact=fact*i;    
    }    
    return fact;  
}




error_p isprime(int n)
{
    int i,m=0,flag=0;      
    m=n/2;    
    for(i=2;i<=m;i++)    
    {    
        if(n%i==0)    
        {    
            return PRIME;   
            flag=1;    
            break;    
        }    
    }    
    if(flag==0)
    {
        return NONPRIME;
    }       
}






error_t ispalindrome(int n)
{
    int r,sum=0,temp;       
    temp=n;    
    while(n>0)    
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }    
    if(temp==sum)   
    {
        return PALINDROME;
    } 
    return NONPALINDROME;  
}



double vsum(int num,...) {

   va_list valist;
   double sum = 0.0;
   int i;

   /* initialize valist for num number of arguments */
   va_start(valist, num);

   /* access all the arguments assigned to valist */
   for (i = 0; i < num; i++) {
      sum += va_arg(valist, int);
   }
	
   /* clean memory reserved for valist */
   va_end(valist);

   return sum;
}
