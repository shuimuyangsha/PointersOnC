#include "stdlib.h"
#include "string.h"
#include "stdio.h"


//int main(void)
//{
//	//�༶ָ��
//	int num = 123;
//	int* p1 = &num;
//	int** p2 = &p1;
//	printf("num = %d\n",num);
//	printf("&num = %p\n",&num);
//	printf("p1 = %p\n",p1);
//	printf("p2 = %p\n",p2);
//	printf("**p2 = %d\n",**p2);
//	return 0;
//}

FILE* stream1, *stream2;
int main(void) 
{
	errno_t err;
	err = fopen_s(&stream1,"file.txt","r");
	if (err == 0) {
		printf("�ļ��Ѵ�");
	}
	else {
		printf("�ļ�δ������");
	}
	1
}

