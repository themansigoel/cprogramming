//
//  array.cpp
//  CProgramming
//
//  Created by Mansi Goel on 04/04/18.
//
//

#include "array.hpp"

void arrayPrint()
{
    int arr[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

 int arraySum()
{
    int no[100],i,n,sum=0;
    printf("enter no.s");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter no %d",i+1);
        scanf("%d",&no[i]);
        sum += no[i];
    }
    printf("sum of the no.s %d",sum);
    return 0;
    
}

 int maxElement()
{
    int no[100],max=0,n,i;
    printf("enter the no.");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the no %d",i+1);
        scanf("%d",&no[i]);
        if(max<no[i])
        {
            max=no[i];
        }
    }
    printf("maximum element is %d",max);
    return 0;
}

int minElement()
{
    int no[100],max=0,n,i;
    printf("enter the no.");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the no %d",i+1);
        scanf("%d",&no[i]);
        if(max<no[i])
        {
            max=no[i];
        }
    }
    printf("m element is %d",max);
    return 0;
}

int sortArray()
{
    int a[100],i,n,temp;
    printf("enter the no. ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the no. %d",i+1);
        scanf("%d",&a[i]);
    }
        for(i=1;i<=n;i++)
        {
            if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
            else{
                printf("%d",a[i]);
            }
        
    }
    printf("sorted array is ");
    for(i=1;i<=n;i++)
    {
        printf(" %d",a[i]);
        printf("\n");
    }
    return 0;
}


