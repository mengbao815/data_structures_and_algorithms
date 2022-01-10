#include "my_list.h"

void insert(my_list_node * head, my_list_node * node)
{
	if (NULL == head) {
		return;
	}
	
	while (NULL != head->next) {
		head = head->next;
	}
	head->next = node;	
}

void revert(my_list_node **head)
{
	my_list_node * second_list_head = NULL;
	my_list_node * reverted_list_second = NULL;

	if ((NULL == head) || (NULL == *head)) {
		return;
	}

	second_list_head = (*head)->next;
	(*head)->next = NULL;
	while(NULL != second_list_head) {
		reverted_list_second = *head;
		*head = second_list_head;
		second_list_head = second_list_head->next;
		(*head)->next = reverted_list_second;
	}
}


void print_my_list(const my_list_node *head)
{
	while(NULL != head) {
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}
