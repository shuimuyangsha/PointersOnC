#include "stdio.h"

/*
**  �õݹ鷽������� n ���Ʋ��������е�ֵ��
*/
int result;
long fibonacci(int n) 
{
	if (n <= 2)
		return 1;
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main(void)
{

	return 0;
}
