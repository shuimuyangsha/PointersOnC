#include "stdio.h"

/*
**  用递归方法计算第 n 个菲波那切数列的值。
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
