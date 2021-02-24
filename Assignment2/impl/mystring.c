#include<stdio.h>
#include"mystring.h"
#include<string.h>

int mystrlen(char *mystring)
{
    int l;
    for(l=0;mystring[l]!='\0';l++);
    return l;
}

char* mystrcpy(char *dest_string,char *src_string)
{
    int i;
    char src=src_string[0];
    for(i=0;src!='\0';i++)
    {
        dest_string[i]=src_string[i];
        src=src_string[i];
    }
    dest_string[i]='\0';
    return dest_string;
}

char* mystrcat(char *mystring1,char *mystring2)
{
    int i,j,k=0;
    char *concat_string;
    char src=mystring1[0];
    for(i=0;src!='\0';i++)
    {
        concat_string[k]=mystring1[i];
        src=mystring1[i];
        k++;
    }
    for(j=0;mystring2[j]!='\0';j++)
    {
        concat_string[k]=mystring2[j];
        src=mystring2[j];
        k++;
    }
    concat_string[k]='\0';
    return concat_string;
}

int mystrcmp(char *mystring1,char *mystring2)
{
    int l1=mystrlen(mystring1);
    int l2=mystrlen(mystring2);
    if(l1<l2)
    {
        return -1;
    }
    else
    if(l1>l2)
    {
        return 1;
    }
    else
    {
        int i,j,flag=0;
        for(i=0,j=0;i<l1;i++,j++)
        {
            if(mystring1[i]!=mystring2[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}