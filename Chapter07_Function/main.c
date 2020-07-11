#include "stdio.h"

/*
**  用递归方法计算第 n 个菲波那切数列的值。
*/
long result;
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
	int i;
	for (i = 0; i < 23;i++) {

		result = fibonacci(i);
		printf("n = %5d;result = %5d\n", i,result);
	}
	//result = fibonacci(3);
	//printf("result = %d\n",result);
	return 0;
}
