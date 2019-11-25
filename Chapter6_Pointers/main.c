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

char str[] = {"ABCDEFG"};
const char substr[] = {"EF"};

int main(void)
{
	int result = 0;
	printf("%s\r\n", &str);
	printf("%s\r\n", &substr);
	result = del_substr(&str, &substr);
	printf("%d\r\n", result);
	printf("%s\r\n", &str);

	

	while (1);
	return 0;
}