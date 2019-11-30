#include "sll_cnt.h"
#include "string.h"
#include "stdio.h"
#include "math.h"
#include "sll_search.h"
#include "sll_reverse.h"
#include "sll_remove.h"
#include "sll_wordInsert.h"

int isExist(wordlist *listPtr, char *string)
{
	wordlist *current = listPtr;

	while (current != NULL) {
		if (strcmp(string, current->word) == 0) {
			return EXIST;
		}
		current = current->NextWord;
	}

	return NOEXIST;
}

int sll_wordInsert(wordlist **listPtr, char *string)
{
	wordlist **current = listPtr;
	wordlist *new;
	char *temp;

	while (*current != NULL) {
		if (strcmp(string,(*current)->word) <0 ) {
			//生成new节点，插入到current之前,current为指向nextWord字段的指针
			new = (wordlist*)malloc(sizeof(wordlist));
			temp = (char*)malloc(strlen(string));
			if (temp == NULL) {
				return FALSE;
			}
			//memcpy(temp,string,strlen(string));
			strcpy(temp, string);
			new->word = temp;
			new->NextWord = *current;
			*current = new;

			return TRUE;
		}
		current = &(*current)->NextWord;
	}

	new = (wordlist*)malloc(sizeof(wordlist));
	temp = (char*)malloc(strlen(string));
	if (temp == NULL) {
		return FALSE;
	}
	//memcpy(temp, string, strlen(string));
	strcpy(temp, string);

	new->word = temp;
	new->NextWord = NULL;
	*current = new;

	return 0;
}

int WordAlphaListInsert(alphalist *ptr, char *string)
{
	char headCh = string[0];
	alphalist *current = ptr;
	wordlist *wl;
	wordlist **rootPtr;
	char *temp;

	while (current->alpha != headCh) {
		current = current->nextAlpha;
	}

	if (isExist(current->wlPtr,string ) == EXIST) {
		return FALSE;
	}

	if (current->wlPtr == NULL) {
		wl = (wordlist*)malloc(sizeof(wordlist));
		wl->NextWord = NULL;
		temp = (char *)malloc(strlen(string));
		if (temp == NULL) {
			return FALSE;
		}
		strcpy(temp,string);
		wl->word = temp;
		current->wlPtr = wl;
	}
	else {
		rootPtr = &current->wlPtr;
		sll_wordInsert(rootPtr,string);
	}
	return TRUE;
}

