#include"bitmask.h"


int setBit(int data, int pos) 
{ 
    return (data | (1 << pos)); 
} 

int clearNthBit(int data,int pos)
{
    return (data & (~(1 << pos)));
}

int flipBit(int storage, int pos) 
{ 
    return storage ^= 1 << pos; 
    
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
