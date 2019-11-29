#include "sll_cnt.h"
#include "string.h"
#include "stdio.h"
#include "math.h"
#include "sll_search.h"
#include "sll_reverse.h"
#include "sll_remove.h"
#include "sll_wordInsert.h"


int sll_wordInsert(wordlist **listPtr, char *string)
{
	wordlist **current = listPtr;
	wordlist *new;
	char *temp;

	while (*current != NULL) {
		if (strcmp(string,(*current)->word) >0 ) {
		

		}
		*current = (*current)->NextWord;
	}

	new = (wordlist*)malloc(sizeof(wordlist));
	temp = (char*)malloc(strlen(string));
	if (temp == NULL) {
		return FALSE;
	}
	strcpy(new->word,temp);
	new->NextWord = NULL;
	*current = new;

	return 0;
}

