#include "sll_cnt.h"
#include "string.h"
#include "stdio.h"
#include "math.h"

//在单链表中计数节点的个数
int sll_count_nodes(struct NODE *first)
{
	int count;
	for (count = 0; first != NULL;first = first->link) {
		count += 1;
	}

	return count;
}

