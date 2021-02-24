#include"bitmask.h"

int set(int number,int set_bit)
{
    return(number | (1<<set_bit));
}

int reset(int number,int reset_bit)
{
    return(number & (~(1<< reset_bit)));
}

int flip(int number,int flip_bit)
{
    return(number ^ (1<<flip_bit));
}

int query(int number1,int number2,int query_type)
{
    switch(query_type)
    {
        case 1:
            return number1 | number2;
            break;
        case 2:
            return number1 & number2;
            break;
        case 3:
            return number1 ^ number2;
            break;
        default:
            return 0;
            break;
    }
}