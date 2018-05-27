//
//  DoubleLinkedList.hpp
//  CProgramming
//
//  Created by Mansi Goel on 27/05/18.
//


#include <stdio.h>

struct list_double_node
{
    int info;
    struct list_double_node* prev;
    struct list_double_node* next;
};

//Method to print given double linked list based on the given base address
void printDoubleLinkedList(struct list_double_node* n);

//To create a link list for test purpose with 5 elements and returns the base address
struct list_double_node* doubleLinkedList();
