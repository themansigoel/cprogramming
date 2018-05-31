//
//  recursion.cpp
//  CProgramming
//
//  Created by MANSI GOEL on 28/05/18.
//
//

#include "recursion.hpp"
#include <stdlib.h>
#include <stdio.h>

int recursion_sumOfNo(int *arr,int size)
{
    if(size<=0)
    {
        return arr[size];
    }
    else
        return arr[size]+recursion_sumOfNo(arr,size-1);
}

int recusrion_sumOfNaturalNo(int upto)
{
    if(upto<=0)
    {
        return 0;
    }
    else
    {
        return upto+recusrion_sumOfNaturalNo(upto-1);
    }
    
}
int recursion_countNoOfChar(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }
    else
    {
        return 1+recursion_countNoOfChar(str+1);
    }
}
void recursion_revString(char *str)
{
    if(*str == '\0')
    {
        return;
        
    }
    else{
        recursion_revString(str+1);
        printf("%c",*str);
    }
  
}

int recursion_powerOfNo(int no,int pow)
{
   if(pow==0)
   {
       return 1;
   }
   else{
       return no*recursion_powerOfNo(no, pow-1);
   }
}

int recursion_factorial(int no)
{
  if(no==1)
  {
      return 1;
  }
  else{
      return no*recursion_factorial(no-1);
  }
}
void recursion_returnWords(char *str)
{
    if(*str == '\0')
    {
        return ;
    }
    else{
        printf("%c \n",*str);
        return recursion_returnWords(str+1);
    }
}

int recursion_fibonacci(int n)
{
    if(n == 1)
       {
           return 1;
       }
    if(n == 0){
        return 0;
    }
    else{
        return  recursion_fibonacci(n-1)+recursion_fibonacci(n-2);
    }
}




