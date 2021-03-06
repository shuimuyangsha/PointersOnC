#ifndef SLL_CNT_H
#define SLL_CNT_H

typedef struct NODE {
	struct NODE		*link;
	int				value;
}Node;


typedef struct WORD_list {
	struct WORD_list	*NextWord;
	char				*word;
}wordlist;

typedef struct Alphalist {
	struct Alphalist *nextAlpha;
	wordlist *wlPtr;
	char alpha;
}alphalist;

int sll_count_nodes(struct NODE *first);

#endif // !SLL_CNT_H
