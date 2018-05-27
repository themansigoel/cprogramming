//
//  DoubleLinkedList.cpp
//  CProgramming
//
//  Created by RAHUL GOEL on 27/05/18.
//
//

#include "DoubleLinkedList.hpp"
#include <stdlib.h>

struct list_double_node* newNode_(int value);

struct list_double_node* doubleLinkedList()
{
    struct list_double_node* first=NULL;
    struct list_double_node* second=NULL;
    struct list_double_node* third=NULL;
    struct list_double_node* fourth=NULL;
    struct list_double_node* fifth=NULL;
    first = newNode_(1);
    second = newNode_(2);
    third = newNode_(3);
    fourth = newNode_(4);
    fifth = newNode_(5);
    first->next=second;
    second->prev=first;
    second->next=third;
    third->prev=second;
    third->next=fourth;
    fourth->prev=third;
    fourth->next=fifth;
    fifth->prev=fourth;
    fifth->next=NULL;
    
    
    return first;
}

struct list_double_node* newNode_(int value)
{
    struct list_double_node *d=(struct list_double_node*)malloc(sizeof(struct list_double_node));
    d->info=value;
    d->prev=NULL;
    d->next=NULL;
    return d;
}

void printDoubleLinkedList(struct list_double_node* n)
{
    while(n!=NULL)
    {
        printf("%d ",n->info);
        n=n->next;
    }
}
