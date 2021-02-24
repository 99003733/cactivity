#include"mystring.h"
#include"myutils.h"
#include"bitmask.h"
#include<stdio.h>

int main()
{
   char string1[]="Welcome to ";
   char string2[]="Ltts";
   char string3[100];
   int choice,len,flag,number1,number2;
   printf("\nEnter your Choice : ");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
         len=mystrlen(string1);
         printf("Length of given string is %d",len);
         printf("Copied String : %s",mystrcpy(string2,string1));
         printf("Concatenated String : %s",mystrcat(string1,string2));
         flag=mystrcmp(string1,string2);
         if((flag==1)&&(flag==-1))
         {
            printf("\nStrings are not equal");
         }
         else
         {
            printf("\nStrings are equal");
         }
         break;
      case 2:
           number1=20;
           printf("Factorial is : %lf",factorial(number1));
           number1=31;
           flag=isPrime(number1);
           if(flag==1)
           {
              printf("\nIt is a Prime Number");
           }
           else
           {
              printf("\nIt is not a Prime Number");
           }
           number1=12321;
           flag=isPalindrome(number1);
           if(flag==1)
           {
              printf("\nGiven number is a palindrome");
           }
           else
           {
              printf("\nGiven number is not a palindrome");
           }
           printf("Vector Sum : %lf",vsum(2,34,55));
         break;
      case 3:
            number1=45,number2=23;
            printf("\nNumber after 3rd bit is set : %d",set(number1,3));
            printf("\nNumber after 6th bit is reset : %d",reset(number1,6));
            printf("\nNumber after flipping 4th bit : %d",flip(number2,4));
            printf("\nNumber by performing bitwise xor operation : %d",query(number1,number2,3));
            break;
         default:printf("Wrong Choice");
            break;
   }
   return 0;
}
