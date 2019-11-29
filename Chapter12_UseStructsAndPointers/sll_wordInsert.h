#ifndef SLL_WORDINSERT_H
#define SLL_WORDINSERT_H
#include "sll_cnt.h"
#include "stdlib.h"

#define  EXIST 1
#define  NOEXIST 0

int sll_wordInsert(wordlist **listPtr,char *string);
int isExist(wordlist *listPtr, char *string);
int WordAlphaListInsert(alphalist *ptr, char *string);

#endif // !SLL_WORDINSERT_H
