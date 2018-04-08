//
//  pattern.c
//  CProgramming
//
//  Created by RAHUL GOEL on 03/04/18.
//
//

#include "pattern.hpp"
#include<stdio.h>

int patternPrint1()
{
    int i,j,n;
    printf("enter the no.");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else {
                
                printf("*");
            }
    
        }
        printf("\n");
    }
    return 0;
}
 int patternPrint2()
{
    int i,j,n;
    printf("enter no.");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int patternPrint3()
{
    int i,j,n;
    printf("enter no.");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int patternPrint4()
{
    int i,j,n;
    printf("enter no.");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


int patternPrint5()
{
    int i,j,n;
    printf("enter no.");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
        for(i=0;i<n;i++)
        {
            for(j=n;j>i;j--)
            {
                printf("*");
            }
        printf("\n");
    }
    return 0;
    }






