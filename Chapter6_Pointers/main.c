///*�ڶ���*/
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



///*�ڶ���*/
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


///*������*/
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


///*������*/
//#include "math.h"
//#include "stdio.h"
//#include "string.h"
//#include "eratosthenes.h"
//#include "time.h"
//
//clock_t SpendTime;
//
//#define AMOUNT  (int)100000		//����
//char num[AMOUNT] = { TRUE };	//��¼�Ƿ�Ϊ����
//int PrimeNumber = 0;	//�����ĸ���
//int main(void) {
//	memset(&num, TRUE, AMOUNT);
//
//	PrimeNumber = eratosthenes(num,AMOUNT);
//	printf("������%d����\r\n", PrimeNumber);
//	SpendTime = clock();
//	printf("����ʼִ�к�ռ�ô�����ʱ��%d\r\n", SpendTime);
//	while (1);
//	return 0;
//}



///*������*/ δ���
//#include "math.h"
//#include "stdio.h"
//#include "string.h"
//#include "eratosthenes.h"
//#include "time.h"
//#include "bit_array.h"
//
//clock_t SpendTime;
//
//#define AMOUNT  (int)100000		//����
//char num[AMOUNT] = { TRUE };	//��¼�Ƿ�Ϊ����
//int PrimeNumber = 0;	//�����ĸ���
//int main(void) {
//	memset(&num, TRUE, AMOUNT);
//
//	PrimeNumber = eratosthenes(num, AMOUNT);
//	printf("������%d����\r\n", PrimeNumber);
//	SpendTime = clock();
//	printf("����ʼִ�к�ռ�ô�����ʱ��%d\r\n", SpendTime);
//	while (1);
//	return 0;
//}

