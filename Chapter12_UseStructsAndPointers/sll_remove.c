#include "sll_cnt.h"
#include "string.h"
#include "stdio.h"
#include "math.h"
#include "sll_search.h"
#include "sll_reverse.h"
#include "sll_remove.h"




int sll_remove(Node *first, Node *node)
{
	//sll_search_node(first, node);
	Node *pre = NULL;
	Node *cur = first;

	while (cur != NULL && cur != node) {
		pre = cur;
		cur = cur->link;
	}

	if (cur != NULL) {
		pre->link = cur->link;	//		删除当前节点
		return TRUE;
	}
	else {
		return FALSE;
	}
}
