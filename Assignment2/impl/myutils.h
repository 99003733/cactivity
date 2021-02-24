/**
 * @file mathfunction.h
 * @author Aditya Mewara (aditya.mewara@ltts.com)
 * @brief Few of the mathematical functions such as factorial, prime number etc are constructed here
 * @version 0.1
 * @date 2021-02-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __MYUTILS_H
#define __MYUTILS_H

typedef enum error_p{
    PRIME,
    NONPRIME
}error_p;

typedef enum error_t{
    PALINDROME,
    NONPALINDROME
}error_t;

int factorial(int number);
error_p isprime(int n);
error_t ispalindrome(int n);
double vsum(int num,...);




#endif
