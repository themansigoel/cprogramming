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
    struct list_double_node *i = doubleLinkedList();
    printDoubleLinkedList(i);
    return 0;
}
