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
//#include "stdio.h"
//#include "del_substr.h"
//
//char str[] = {"ABCDEFG"};
//const char substr[] = {"EF"};
//
//int main(void)
//{
//	int result = 0;
//	printf("%s\r\n", &str);
//	printf("%s\r\n", &substr);
//	result = del_substr(&str, &substr);
//	printf("%d\r\n", result);
//	printf("%s\r\n", &str);
//
//	while (1);
//	return 0;
//}


///*第三题*/
//#include "reverse_string.h"
//#include "stdio.h"
//#include "string.h"
//
//char string[] = {"ABCDEFG"};
//int main(void) 
//{
//	printf("%s\r\n",&string);
//	reverse_string(&string);
//	printf("%s\r\n", &string);
//
//	while (1);
//	return 0;
//}


///*第四题*/
//#include "math.h"
//#include "stdio.h"
//#include "string.h"
//#include "eratosthenes.h"
//#include "time.h"
//
//clock_t SpendTime;
//
//#define AMOUNT  (int)100000		//总数
//char num[AMOUNT] = { TRUE };	//记录是否为质数
//int PrimeNumber = 0;	//质数的个数
//int main(void) {
//	memset(&num, TRUE, AMOUNT);
//
//	PrimeNumber = eratosthenes(num,AMOUNT);
//	printf("质数有%d个。\r\n", PrimeNumber);
//	SpendTime = clock();
//	printf("程序开始执行后占用处理器时间%d\r\n", SpendTime);
//	while (1);
//	return 0;
//}



///*第五题*/ 未完成
//#include "math.h"
//#include "stdio.h"
//#include "string.h"
//#include "eratosthenes.h"
//#include "time.h"
//#include "bit_array.h"
//
//clock_t SpendTime;
//
//#define AMOUNT  (int)100000		//总数
//char num[AMOUNT] = { TRUE };	//记录是否为质数
//int PrimeNumber = 0;	//质数的个数
//int main(void) {
//	memset(&num, TRUE, AMOUNT);
//
//	PrimeNumber = eratosthenes(num, AMOUNT);
//	printf("质数有%d个。\r\n", PrimeNumber);
//	SpendTime = clock();
//	printf("程序开始执行后占用处理器时间%d\r\n", SpendTime);
//	while (1);
//	return 0;
//}

