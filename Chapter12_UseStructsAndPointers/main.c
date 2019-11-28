
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


///*������*/
//#include "sll_cnt.h"
//#include "string.h"
//#include "stdio.h"
//#include "math.h"
//#include "sll_search.h"
//#include "sll_reverse.h"
//#include "sll_remove.h"
//
//int main(void)
//{
//	Node sixth  = { NULL, 7 };
//	Node fifth  = { &sixth, 6 };
//	Node fourth = { &fifth, 5 };
//	Node third  = { &fourth, 4 };
//	Node second = { &third, 3 };
//	Node first  = { &second, 2 };
//	Node *head  = &first;
//	Node * result = 0;
//	Node *cur = head;
//	Node *next;
//	Node *remove_node;
//
//	printf("�ڵ��ַ %p\r\n", cur);
//	while ((cur) != NULL) {
//		next = cur->link;
//		printf("�ڵ��ֵ�� %d\r\n", cur->value);
//		cur = next;
//	}
//
//	remove_node = &third;
//	printf("Ҫɾ���Ľڵ��ַ %p\r\n", remove_node);
//	result = sll_remove(head, remove_node);
//	printf("ɾ����������ֵ %d\r\n", result);
//
//	cur = head;
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
//#include "sll_cnt.h"
//#include "string.h"
//#include "stdio.h"
//#include "math.h"
//#include "sll_search.h"
//#include "sll_reverse.h"
//#include "sll_remove.h"
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
//	Node *remove_node;
//
//	printf("�ڵ��ַ %p\r\n", cur);
//	while ((cur) != NULL) {
//		next = cur->link;
//		printf("�ڵ��ֵ�� %d\r\n", cur->value);
//		cur = next;
//	}
//
//	remove_node = &third;
//	printf("Ҫɾ���Ľڵ��ַ %p\r\n", remove_node);
//	result = sll_remove(head, remove_node);
//	printf("ɾ����������ֵ %d\r\n", result);
//
//	cur = head;
//	while ((cur) != NULL) {
//		next = cur->link;
//		printf("�ڵ��ֵ�� %d\r\n", cur->value);
//		cur = next;
//	}
//
//	while (1);
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE  1
#define FALSE 0
#define  EXIST 1
#define  NOEXIST 0
typedef struct Wordlist {
	struct Wordlist *nextWord;
	char *word;
} wordlist;

typedef struct Alphalist {
	struct Alphalist *nextAlpha;
	//�������������ָ��
	wordlist * wlPtr;
	char alpha;
} alphalist;

int isExist(wordlist *listPtr, char *string)
{
	wordlist *current = listPtr;

	while (current != NULL) {
		if (strcmp(string, current->word) == 0) {
			return EXIST;
		}
		current = current->nextWord;
	}

	return NOEXIST;
}

int wordInsert(wordlist **listPtr, char *string)
{
	wordlist **current = listPtr;
	wordlist *new;
	char *temp;

	while (*current != NULL) {
		//���ַ�������в���
		if (strcmp(string, (*current)->word) < 0) {
			//����new�ڵ㣬���뵽current֮ǰ,currentΪָ��nextWord�ֶε�ָ��
			new = (wordlist *)malloc(sizeof(wordlist));
			temp = (char *)malloc(strlen(string));
			if (temp == NULL) {
				return  FALSE;
			}
			strcpy(temp, string);
			new->word = temp;
			//newָ�� *current
			new->nextWord = *current;
			//���� *currentΪ��ǰ�����
			*current = new;
			return TRUE;
		}
		//ѭ������һ��
		current = &(*current)->nextWord;
	}
	//ѭ���������б�󣬻�δ�ҵ�����ĩβ׷����
	temp = (char *)malloc(strlen(string));
	if (temp == NULL) {
		return  FALSE;
	}
	strcpy(temp, string);
	new = (wordlist *)malloc(sizeof(wordlist));
	new->word = temp;
	new->nextWord = NULL;
	*current = new;

	return TRUE;
}

int WordAlphaListInsert(alphalist *ptr, char *string)
{
	char headCh = string[0];
	alphalist *current = ptr;
	wordlist *wl;
	wordlist **rootPtr;
	char *temp;

	//ͨ�����ַ�����wordlist
	while (current->alpha != headCh) {
		current = current->nextAlpha;
	}

	//�Ѿ�����
	if (isExist(current->wlPtr, string) == EXIST) {
		return FALSE;
	}
	else {
		//���wordlistΪNULL�գ��򴴽���ʼ��������
		if (current->wlPtr == NULL) {
			wl = (wordlist *)malloc(sizeof(wordlist));
			//��һ���ڵ㣬nextwordΪNULL
			wl->nextWord = NULL;
			//�����ڴ濽���ַ���
			temp = (char *)malloc(strlen(string));
			if (temp == NULL) {
				return FALSE;
			}
			strcpy(temp, string);
			wl->word = temp;
			current->wlPtr = wl;
		}
		else {
			//����е��ʱ�����뵥��
			rootPtr = &(current->wlPtr);
			wordInsert(rootPtr, string);
		}
		return TRUE;
	}
}

//��ӡ��������
void printList(alphalist *list)
{
	alphalist *currentAl = list;
	wordlist  *currentWl;
	while (currentAl != NULL) {
		printf("%c:\n", currentAl->alpha);
		currentWl = currentAl->wlPtr;
		while (currentWl != NULL) {
			printf("%s \t", currentWl->word);
			currentWl = currentWl->nextWord;
		}
		printf("\n-----------------------\n");
		currentAl = currentAl->nextAlpha;
	}
}

int main()
{
	char z;
	alphalist *pre = NULL;
	alphalist *current = NULL;

	//������ĸ�͵����б�
	for (z = 122; z > 96; z--) {
		current = (alphalist *)malloc(sizeof(alphalist));
		current->alpha = z;
		current->wlPtr = NULL;
		current->nextAlpha = pre;
		pre = current;
	}
	//���뵥��
	WordAlphaListInsert(current, "yang");
	WordAlphaListInsert(current, "xun");
	WordAlphaListInsert(current, "xan");
	WordAlphaListInsert(current, "xzn");
	WordAlphaListInsert(current, "wu");
	WordAlphaListInsert(current, "ya");
	WordAlphaListInsert(current, "yz");
	printList(current);

	return 0;
}





