#include "sll_cnt.h"
#include "string.h"
#include "stdio.h"
#include "math.h"
#include "sll_search.h"
#include "sll_reverse.h"


Node *sll_reverse(Node *first)
{
	Node *cur = first;
	Node *next;
	Node *pre = NULL;
	Node *morePre = NULL;

	if (first == NULL) {
		return NULL;
	}

	while ((next = cur->link) != NULL) {
		pre = cur;
		cur = next;
		pre->link = morePre;
		morePre = pre;	
	}

	if (cur == first) {
		return first;
	}
	else {
		cur->link = pre;
		return cur;
	}
}
