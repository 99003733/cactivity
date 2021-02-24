/**
 * @file bitmask.h
 * @author Aditya Mewara (aditya.mewara@ltts.com)
 * @brief Contains functions for performing bit operations
 * @version 0.1
 * @date 2021-02-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _BITMASK_H_
#define _BITMASK_H_

int set(int number,int set_bit);
int reset(int number,int reset_bit);
int flip(int number,int flip_bit);
int query(int number1,int number2,int query_type);

#endif