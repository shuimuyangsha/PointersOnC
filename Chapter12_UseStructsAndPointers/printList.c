#include "printList.h"

void printList(alphalist *list)
{
	alphalist *currentAl = list;
	wordlist  *currentWl = NULL;
	while (currentAl != NULL) {
		printf("%c:\r\n",currentAl->alpha);
		currentWl = currentAl->wlPtr;
		while (currentWl != NULL) {
			printf("%s\t",currentWl->word);
			currentWl = currentWl->NextWord;
		}
		printf("\n-----------------------\n");
		currentAl = currentAl->nextAlpha;
	}
}






