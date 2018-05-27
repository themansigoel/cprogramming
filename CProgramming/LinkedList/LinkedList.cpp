//
//  LinkedList.cpp
//  CProgramming
//
//  Created by Mansi Goel on 25/05/18.
//
//

#include "LinkedList.hpp"


struct node * newNode(int val);

void printList(struct node *n)
{
    while(n!=NULL)
    {
        printf("%d ",n->info);
        n=n->next;
    }
}


struct node* linklist()
{
    struct node *first =NULL;
    struct node *second =NULL;
    struct node *third =NULL;
    struct node *four = NULL;
    struct node *fifth = NULL;

    first = newNode(1);
    second = newNode(2);
    third = newNode(3);
    four = newNode(4);
    fifth = newNode(5);
    
    first->next=second;
    second->next=third;
    third->next = four;
    four->next = fifth;
    
    return first;
}

// for creating a new node
struct node * newNode(int val){
    struct node *d = (struct node *)malloc(sizeof(struct node));
    d->info = val;
    d->next = NULL;
    return d;
}


int countNoOfNodes(struct node* baseAddress){
    int count=0;
    while (baseAddress!=NULL) {
        count=count+1;
        baseAddress = baseAddress->next;
    
    }
    

    return count;
}





