
///*��һ��*/
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
//	printf("��������%d���ڵ㡣",result);
//	while (1);
//	return 0;
//}

/*�ڶ���*/
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

	printf("�ڵ��ַ %p\r\n", result);
	printf("�������Ľڵ��ֵ�� %d\r\n", result->value);

	while (1);
	return 0;
}











