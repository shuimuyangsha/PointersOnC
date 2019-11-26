#include "stdio.h"
#include "math.h"
#include "string.h"
#include "bit_array.h"



//指定的位设置为1
void set_bit(char bit_array[], unsigned int bit_number)
{
	char *p;
	p = bit_array + (bit_number / 8);
	*p |= (0x01 << (bit_number % 8));
}

//指定的位设置为0
void clear_bit(char bit_array[], unsigned int bit_number)
{
	char *p;
	p = bit_array + (bit_number / 8);
	*p &= (char)~(0x01 << (bit_number % 8));
}

//把指定的位设置为value的值
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

//如果参数中的值不为0函数返回真，否则返回假
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
