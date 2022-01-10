#include "stdio.h"
#include "stdlib.h"
#include "my_list.h"

int main(int argc, char*argv[])
{
	my_list_node *head = NULL;
	my_list_node *node = NULL;
	for (int loop = 0; loop < 10; loop++) {
		node = (my_list_node*)malloc(sizeof(my_list_node));
		if (NULL != node) {
			node->data = loop;
			node->next = NULL;
			if (NULL != head) {
				insert(head, node);
			} else {
				head = node;
			}
		}
	}
	
	print_my_list(head);
	revert(&head);
	print_my_list(head);
	return 0;
}
