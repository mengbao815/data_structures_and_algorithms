#ifndef MY_LIST_H
#define MY_LIST_H
#include "stdio.h"

typedef struct my_list_node {
	int data;
	struct my_list_node * next;
} my_list_node;

void insert(my_list_node * head, my_list_node * node);

void revert(my_list_node **head);

void print_my_list(const my_list_node *head);

#endif
