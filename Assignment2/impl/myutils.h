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

#ifndef _MYUTILS_H_
#define _MYUTILS_H_

typedef enum res
{
    INCORRECT_NUMBER,
    CORRECT_NUMBER
}
res;

double factorial(const unsigned int number);
res isPrime(const unsigned int number);
res isPalindrome(const unsigned int number);
double vsum(int number,...);

#endif
