#include "sll_cnt.h"
#include "string.h"
#include "stdio.h"
#include "math.h"

//�ڵ������м����ڵ�ĸ���
int sll_count_nodes(struct NODE *first)
{
	int count;
	for (count = 0; first != NULL;first = first->link) {
		count += 1;
	}

	return count;
}

