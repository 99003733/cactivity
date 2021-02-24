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

int setBit(int n, int k);
int clearNthBit(int data,int pos);
int flipBit(int storage, int pos);

int query(int number1,int number2,int query_type);

#endif
