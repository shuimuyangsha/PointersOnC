#include "sll_cnt.h"
#include "string.h"
#include "stdio.h"
#include "math.h"
#include "sll_search.h"


Node *sll_search_node(Node *first, Node *node)
{
	Node *pre = NULL;
	Node *cur = first;

	while (cur != NULL && cur != node) {
		pre = cur;
		cur = cur->link;
	}
	if (cur != NULL) {
		return cur;
	}
	else {
		return NULL;
	}
}


Node *sll_search(Node *first, int value)
{
	Node *pre = NULL;
	Node *cur = first;

	while (cur!=NULL && cur->value != value) {
		pre = cur;
		cur = cur->link;	
	}
	if (cur != NULL) {
		return cur;
	}
	else {
		return NULL;
	}
}


