//
//  recursion.cpp
//  CProgramming
//
//  Created by MANSI GOEL on 28/05/18.
//
//

#include "recursion.hpp"


int sumOfNo(int *arr,int size)
{
    if(size<=0)
    {
        return arr[size];
    }
    else
        return arr[size]+sumOfNo(arr,size-1);
}
