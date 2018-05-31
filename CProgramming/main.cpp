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
   char str[20];
    scanf("%[^\n]s",str);
    recursion_returnWords(str);
    
    /*recursion_revString(str);
     arrayPrint(5);
    int n;
    scanf("%d",&n);
    recursion_fibonacci(n);
    printf("%d",recursion_fibonacci(n-1));*/
    return 0;
}
