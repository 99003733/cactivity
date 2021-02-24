/**
 * @file mystring.h
 * @author Aditya Mewara (aditya.mewara@ltts.com)
 * @brief Executing various string functions
 * @version 0.1
 * @date 2021-02-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _MYSTRING_H
#define _MYSTRING_H

int mystrlen(char *mystring);
char* mystrcpy(char *dest_string,char *src_string);
char* mystrcat(char *mystring1,char *mystring2);
int mystrcmp(char *mystring1,char *mystring2);

#endif