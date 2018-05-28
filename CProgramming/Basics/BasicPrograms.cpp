//
//  BasicPrograms.cpp
//  CProgramming
//
//  Created by Mansi Goel on 04/04/18.
//
//

#include "BasicPrograms.hpp"

void hello()
{
    printf("hello my love ");
}


int sumOfGivenNo(int a, int b)
{
    return a+b;
}

int factorial(int number)
{
    int i,fact=1;
    for(i=1;i<=number;i++)
    {
        fact=fact*i;
    }    
    return fact;
}

int fibonacci(int n)
{
    int n1=0,n2=1,n3,i;
    printf("fibonacci series is%d %d",n1,n2);
    for(i=2;i<n-1;i++)
    {
        n3=n1+n2;
          printf("\t%d ",n3);
        n1=n2;
        n2=n3;
      
    }
    return 0;
}

void evenOdd(int n)
{
    
    if(n%2==0)
    {
        printf("no. is even");
    }
    else{
        printf("no. is odd");
    }
}

int hcf(int x,int y)
{
    int a,b,t;
    a=x;
    b=y;
    while (b!=0)
    {
        t=b;
        b=a%b;
        a=t;
        
    }
    return a;
}

int lcm(int x,int y)
{
    int a,b,t,lcm;
    a=x;
    b=y;
    while (b!=0)
    {
        t=b;
        b=a%b;
        a=t;
        
    }
 lcm=(x*y)/a;
    return lcm;
}

int prime(int n)
{
    int i;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
    {
        printf("no. is prime");
    }
    else{
        printf("no. is not prime ");
    }
    }
    return 1;
}

int printPrimeNo(int n)
{
    int i,j;
    for(i=2;i<=n;i++)
    {
        for(j=2;j<i/2;j++)
        {
            if(i%j==0)
            {
                printf("%d ",i);
            }
        }
        
    }
        return 0;
}







