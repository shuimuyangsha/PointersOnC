#ifndef SLL_CNT_H
#define SLL_CNT_H

typedef struct NODE {
	struct NODE		*link;
	int				value;
}Node;

int sll_count_nodes(struct NODE *first);

#endif // !SLL_CNT_H
