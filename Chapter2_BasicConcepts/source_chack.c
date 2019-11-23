#include "stdio.h"
int function1(char flag)
{
	int i,j;
	if (flag == 1) {
		for (i = 0; i < 8;i++) {
			j = i;
			printf("j=%d\r\n",j);
		}
	}
	return 0;
}
