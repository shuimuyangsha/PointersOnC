#include "sll_cnt.h"
#include "string.h"
#include "stdio.h"
#include "math.h"
#include "sll_search.h"
#include "sll_reverse.h"


int my_get_sll_len(Node *first)
{
	int len;
	Node *pre = NULL;
	Node *cur = first;

	while (cur != NULL ) {
		pre = cur;
		cur = cur->link;
		len++;
	}
	return len;
}

Node *sll_reverse(Node *first)
{
	int node_len = 0;
	int i;
	Node *head;
	Node *p_temp;

	node_len = my_get_sll_len(first);

	for (i = 0; i < node_len / 2; i++) {
		p_temp = first;
		*(string + i) = *(string + ((string_len - 1) - i));
		*(string + ((string_len - 1) - i)) = ch1;
	}

	return NULL;
}
