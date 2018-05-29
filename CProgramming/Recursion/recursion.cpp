//
//  recursion.cpp
//  CProgramming
//
//  Created by MANSI GOEL on 28/05/18.
//
//

#include "recursion.hpp"


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

