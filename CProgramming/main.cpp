//
//  main.cpp
//  CProgramming
//
//  Created by Mansi Goel on 02/04/18.
//
//

#include <iostream>
#include <stdlib.h>
#include "FilesIncluded.h"

using namespace std;

int main(int argc, const char * argv[]) {
   /* struct list_double_node *i = doubleLinkedList();
    printDoubleLinkedList(i);*/
    int arr[100],size,i;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    
    }
    printf("%d",recursive_func(arr,5));
    return 0;
}
