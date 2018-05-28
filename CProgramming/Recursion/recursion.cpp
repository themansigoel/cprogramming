//
//  recursion.cpp
//  CProgramming
//
//  Created by MANSI GOEL on 28/05/18.
//
//

#include "recursion.hpp"


int recursive_func(int *arr,int size)
{
    if(size<=0)
    {
        return arr[size];
    }
    else
        return arr[size]+recursive_func(arr,size-1);
}
