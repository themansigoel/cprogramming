//
//  BasicPrograms.cpp
//  CProgramming
//
//  Created by RAHUL GOEL on 04/04/18.
//
//

#include "BasicPrograms.hpp"
int hello()
{
    printf("hello my love ");
    return 0;
}
int sumOfGivenNo()
{
    int a=10,b=20,sum;
    sum=a+b;
    printf("sum of no is %d",sum);
    return 0;
}

 int sumByUser()
{
int a,b,sum;
printf("enter the no. a & b");
scanf("%d %d ",&a,&b);
sum=a+b;
printf("sum of two nos is %d",sum);
    return 0;
}

 int factorial()
{
    int i,n,fact=1;
    printf("enter a no.");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of nos is %d",fact);
    return 0;
}

int fibonacci()
{
    int n1=0,n2=1,n3,i,n;
    printf("enter the no.");
    scanf("%d",&n);
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

int evenOdd()
{
    int n;
    printf("enter the no.");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("no. is even");
    }
    else{
        printf("no. is odd");
    }
    return 0;
}

int hcfLcm()
{
    int a,b,t,lcm,gcd,x,y;
    printf("enter the no's");
    scanf("%d %d",&x,&y);
    a=x;
    b=y;
    while (b!=0)
    {
        t=b;
        b=a%b;
        a=t;
        
    }
    gcd=a;
    lcm=(x*y)/gcd;
    printf("HCF of two given no is %d",gcd);
    printf("LCM of two given no is %d",lcm);
    return 0;
}

int prime()
{
    int n;
    printf("enter the no.");
    scanf("%d",&n);
    
}
