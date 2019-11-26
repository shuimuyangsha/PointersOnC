#include "eratosthenes.h"
#include "stdio.h"
#include "string.h"
#include "math.h"
#include "stdlib.h"
#include "bit_array.h"




int eratosthenes(char *num,int len)	//���١����ж�ż��
{
	int i = 2, j = 2;
	int first_not_eliminated = 2;
	int prime_number = 1;//2������������ֱ�Ӽ�һ

	for (j = 3; j < len; j+=2) {
		if (*(num + j) == TRUE) {
			first_not_eliminated = j;
			for (i = j+2; i < len; i+=2) {

				if (i% first_not_eliminated == 0) {
					*(num + i) = FALSE;

				}
				else if (i% first_not_eliminated != 0) {
					
				}
			}
			if (*(num + j) == TRUE) {
				//printf("����%d ��\r\n", j);
				prime_number++;
			}
		}
	}
	return prime_number;
}

//int eratosthenes(char *num, int len)//δ���٣����ж�ż��
//{
//
//	int i = 2, j = 2;
//	int first_not_eliminated = 2;
//	int prime_number = 0;
//
//	for (j = 2; j < len; j++) {
//		if (*(num + j) == TRUE) {
//			first_not_eliminated = j;
//
//			for (i = j + 1; i < len; i++) {
//
//				if (i% first_not_eliminated == 0) {
//					*(num + i) = FALSE;
//
//
//				}
//				else if (i% first_not_eliminated != 0) {
//
//					//*(num + i) = TRUE;
//				}
//			}
//
//			if (*(num + j) == TRUE) {
//				//printf("����%d ��\r\n", j);
//				prime_number++;
//			}
//		}
//	}
//	return prime_number;
//}


