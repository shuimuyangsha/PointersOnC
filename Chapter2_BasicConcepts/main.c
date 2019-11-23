/*第一题*/
#include "increment.h"
#include "negate.h"
#include "stdio.h"

int main(void)
{
	printf("%s\r\n", "调用increment");
	printf("%d\r\n", increment(10));
	printf("%d\r\n", increment(0));
	printf("%d\r\n", increment(-10));
	printf("%s\r\n", "调用negate");
	printf("%d\r\n",negate(10));
	printf("%d\r\n", negate(0));
	printf("%d\r\n", negate(-10));
	while (1);
	return 0;
}







