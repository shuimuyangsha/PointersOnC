#include "stdio.h"
#include "math.h"
#include "string.h"
#include "bit_array.h"



//ָ����λ����Ϊ1
void set_bit(char bit_array[], unsigned int bit_number)
{
	char *p;
	p = bit_array + (bit_number / 8);
	*p |= (0x01 << (bit_number % 8));
}

//ָ����λ����Ϊ0
void clear_bit(char bit_array[], unsigned int bit_number)
{
	char *p;
	p = bit_array + (bit_number / 8);
	*p &= (char)~(0x01 << (bit_number % 8));
}

//��ָ����λ����Ϊvalue��ֵ
void assign_bit(char bit_array[], unsigned int bit_number, int value)
{
	char *p;
	p = bit_array + (bit_number / 8);
	if (value) {
		*p |= (0x01 << (bit_number % 8));
	}
	else {
		*p &= ~(0x01 << (bit_number % 8));
	}
}

//��������е�ֵ��Ϊ0���������棬���򷵻ؼ�
int test_bit(char bit_array[], unsigned int bit_number)
{
	char *p;
	p = bit_array + (bit_number / 8);
	if (*p & (0x01 << (bit_number % 8))) {
		return TRUE;
	}
	else {
		return FALSE;
	}	
}
