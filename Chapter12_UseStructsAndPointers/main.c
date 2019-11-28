
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

///*�ڶ���*/
//#include "sll_cnt.h"
//#include "string.h"
//#include "stdio.h"
//#include "math.h"
//#include "sll_search.h"
//
//int main(void)
//{
//	Node six = { NULL, 6 };
//	Node four = { &six, 5 };
//	Node third = { &four, 4 };
//	Node second = { &third, 3 };
//	Node first = { &second, 2 };
//	Node *head = &first;
//	Node * result = 0;
//
//	result = sll_search(head, 6);
//
//	printf("�ڵ��ַ %p\r\n", result);
//	printf("�������Ľڵ��ֵ�� %d\r\n", result->value);
//
//	while (1);
//	return 0;
//}


///*������*/
//#include "sll_cnt.h"
//#include "string.h"
//#include "stdio.h"
//#include "math.h"
//#include "sll_search.h"
//#include "sll_reverse.h"
//
//int main(void)
//{
//	Node sixth = { NULL, 7 };
//	Node fifth = { &sixth, 6 };
//	Node fourth = { &fifth, 5 };
//	Node third = { &fourth, 4 };
//	Node second = { &third, 3 };
//	Node first = { &second, 2 };
//	Node *head = &first;
//	Node * result = 0;
//	Node *cur = head;
//	Node *next;
//	printf("�ڵ��ַ %p\r\n", cur);
//	while ((cur) != NULL) {
//		next = cur->link;
//		printf("�ڵ��ֵ�� %d\r\n", cur->value);
//		cur = next;
//	}
//
//	result = sll_reverse(head);
//	printf("�ڵ��ַ %p\r\n", result);
//	cur = result;
//	while ((cur) != NULL) {
//		next = cur->link;
//		printf("�ڵ��ֵ�� %d\r\n", cur->value);
//		cur = next;
//	}
//
//	while (1);
//	return 0;
//}


/*������*/
#include "sll_cnt.h"
#include "string.h"
#include "stdio.h"
#include "math.h"
#include "sll_search.h"
#include "sll_reverse.h"
#include "sll_remove.h"

int main(void)
{
	Node sixth  = { NULL, 7 };
	Node fifth  = { &sixth, 6 };
	Node fourth = { &fifth, 5 };
	Node third  = { &fourth, 4 };
	Node second = { &third, 3 };
	Node first  = { &second, 2 };
	Node *head  = &first;
	Node * result = 0;
	Node *cur = head;
	Node *next;
	Node *remove_node;

	printf("�ڵ��ַ %p\r\n", cur);
	while ((cur) != NULL) {
		next = cur->link;
		printf("�ڵ��ֵ�� %d\r\n", cur->value);
		cur = next;
	}

	remove_node = &third;
	printf("Ҫɾ���Ľڵ��ַ %p\r\n", remove_node);
	result = sll_remove(head, remove_node);
	printf("ɾ����������ֵ %d\r\n", result);

	cur = head;
	while ((cur) != NULL) {
		next = cur->link;
		printf("�ڵ��ֵ�� %d\r\n", cur->value);
		cur = next;
	}

	while (1);
	return 0;
}







