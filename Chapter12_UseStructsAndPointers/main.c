
///*第一题*/
//#include "sll_cnt.h"
//#include "string.h"
//#include "stdio.h"
//#include "math.h"
//
//int main(void)
//{
//	Node four   = { NULL, 5 };
//	Node third  = { &four, 4 };
//	Node second = { &third, 3 };
//	Node first  = { &second, 2 };
//	Node *head  = &first;
//	int result  = 0;
//
//	result = sll_count_nodes(head);
//
//	printf("此链表有%d个节点。",result);
//	while (1);
//	return 0;
//}

/*第二题*/
#include "sll_cnt.h"
#include "string.h"
#include "stdio.h"
#include "math.h"
#include "sll_search.h"

int main(void)
{
	Node six = { NULL, 6 };
	Node four = { &six, 5 };
	Node third = { &four, 4 };
	Node second = { &third, 3 };
	Node first = { &second, 2 };
	Node *head = &first;
	Node * result = 0;

	result = sll_search(head, 6);

	printf("节点地址 %p\r\n", result);
	printf("搜索到的节点的值是 %d\r\n", result->value);

	while (1);
	return 0;
}











