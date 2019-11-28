
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

///*第二题*/
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
//	printf("节点地址 %p\r\n", result);
//	printf("搜索到的节点的值是 %d\r\n", result->value);
//
//	while (1);
//	return 0;
//}


///*第四题*/
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
//	printf("节点地址 %p\r\n", cur);
//	while ((cur) != NULL) {
//		next = cur->link;
//		printf("节点的值是 %d\r\n", cur->value);
//		cur = next;
//	}
//
//	result = sll_reverse(head);
//	printf("节点地址 %p\r\n", result);
//	cur = result;
//	while ((cur) != NULL) {
//		next = cur->link;
//		printf("节点的值是 %d\r\n", cur->value);
//		cur = next;
//	}
//
//	while (1);
//	return 0;
//}


///*第五题*/
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
//	printf("节点地址 %p\r\n", cur);
//	while ((cur) != NULL) {
//		next = cur->link;
//		printf("节点的值是 %d\r\n", cur->value);
//		cur = next;
//	}
//
//	remove_node = &third;
//	printf("要删除的节点地址 %p\r\n", remove_node);
//	result = sll_remove(head, remove_node);
//	printf("删除函数返回值 %d\r\n", result);
//
//	cur = head;
//	while ((cur) != NULL) {
//		next = cur->link;
//		printf("节点的值是 %d\r\n", cur->value);
//		cur = next;
//	}
//
//	while (1);
//	return 0;
//}



/*第七题*/
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
//	printf("节点地址 %p\r\n", cur);
//	while ((cur) != NULL) {
//		next = cur->link;
//		printf("节点的值是 %d\r\n", cur->value);
//		cur = next;
//	}
//
//	remove_node = &third;
//	printf("要删除的节点地址 %p\r\n", remove_node);
//	result = sll_remove(head, remove_node);
//	printf("删除函数返回值 %d\r\n", result);
//
//	cur = head;
//	while ((cur) != NULL) {
//		next = cur->link;
//		printf("节点的值是 %d\r\n", cur->value);
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
	//单个单词链表的指针
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
		//按字符排序进行插入
		if (strcmp(string, (*current)->word) < 0) {
			//生成new节点，插入到current之前,current为指向nextWord字段的指针
			new = (wordlist *)malloc(sizeof(wordlist));
			temp = (char *)malloc(strlen(string));
			if (temp == NULL) {
				return  FALSE;
			}
			strcpy(temp, string);
			new->word = temp;
			//new指向 *current
			new->nextWord = *current;
			//更新 *current为当前插入点
			*current = new;
			return TRUE;
		}
		//循环到下一点
		current = &(*current)->nextWord;
	}
	//循环玩整个列表后，还未找到，则末尾追加上
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

	//通过首字符查找wordlist
	while (current->alpha != headCh) {
		current = current->nextAlpha;
	}

	//已经存在
	if (isExist(current->wlPtr, string) == EXIST) {
		return FALSE;
	}
	else {
		//如果wordlist为NULL空，则创建初始单词链表
		if (current->wlPtr == NULL) {
			wl = (wordlist *)malloc(sizeof(wordlist));
			//第一个节点，nextword为NULL
			wl->nextWord = NULL;
			//申请内存拷贝字符串
			temp = (char *)malloc(strlen(string));
			if (temp == NULL) {
				return FALSE;
			}
			strcpy(temp, string);
			wl->word = temp;
			current->wlPtr = wl;
		}
		else {
			//如果有单词表，则插入单词
			rootPtr = &(current->wlPtr);
			wordInsert(rootPtr, string);
		}
		return TRUE;
	}
}

//打印链表内容
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

	//创建字母和单词列表
	for (z = 122; z > 96; z--) {
		current = (alphalist *)malloc(sizeof(alphalist));
		current->alpha = z;
		current->wlPtr = NULL;
		current->nextAlpha = pre;
		pre = current;
	}
	//插入单词
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





