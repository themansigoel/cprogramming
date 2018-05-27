//
//  LinkedList.hpp
//  CProgramming
//
//  Created by Mansi Goel on 25/05/18.
//
//

#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *next;
};

//Method to print given linked list based on the given base address
void printList(struct node *n);

//To create a link list for test purpose with 5 elements and returns the base address
struct node* linklist();


//Method to count number of nodes in given linked list
int countNoOfNodes(struct node* baseAddress);

