# include"myutils.h"
# include<stdio.h>
#include<stdarg.h>

double factorial(const unsigned int number)
{
    int factorial_val=1;
    for(int i=1;i<=number;i++)
    {
        factorial_val=factorial_val*i;
    }
    return factorial_val;
}

res isPrime(const unsigned int number)
{
    if((number==0)||(number==1))
    {
       return INCORRECT_NUMBER;
    }
    else
    {
        int factors=0,flag=0;
        for(int i=1;i<number;i++)
        {
            if(number%i==0)
            {
                factors++;
            }
            if(factors==2)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            return INCORRECT_NUMBER;
        }
        else
        {
           return CORRECT_NUMBER;
        }
    }
}


res isPalindrome(const unsigned int number)
{
    unsigned int temp_number=number;
    unsigned int reverse_number=0;
    while(temp_number!=0)
    {
        reverse_number+=temp_number%10;
        reverse_number=reverse_number*10;
        temp_number=temp_number/10;
    }
    if(reverse_number==number)
    {
        return CORRECT_NUMBER;
    }
    else
    {
        INCORRECT_NUMBER;
    }
}


double vsum(int number,...)
{
    va_list valist;
    double sum=0;
    va_start(valist,number);

    for(int i=0;i<number;i++)
    {
        sum+=va_arg(valist,int);
    }

    va_end(valist);

    return sum;
}