
/*第一题*/
#include "sll_cnt.h"
#include "string.h"
#include "stdio.h"
#include "math.h"

int main(void)
{
	Node four = { NULL, 5 };
	Node third = { &four, 4 };
	Node second = { &third, 3 };
	Node first = { &second, 2 };
	Node *head = &first;
	int result = 0;

	result = sll_count_nodes(head);

	printf("此链表有%d个节点。",result);
	while (1);
	return 0;
}










