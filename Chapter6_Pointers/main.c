///*第二题*/
//#include "stdio.h"
//#include "find_char.h"
//char source[] = {"abcdefg"};
//char chars[] = {"e"};
//char *p_result = NULL;
//
//int main(void)
//{
//	p_result = find_char(&source, &chars);
//	printf("%c\r\n", *p_result);
//	printf("%p\r\n", p_result);
//	while (1);
//	return 0;
//}



///*第二题*/
#include "stdio.h"
#include "del_substr.h"

char str[] = {"ABCEDFG"};
char substr[] = {"FGH"};

int main(void)
{
	del_substr(&str, &substr);
	return 0;
}