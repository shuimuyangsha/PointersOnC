
///*第四题*/
#include "stdio.h"
#include "math.h"
#include "string.h"
#include "bit_array.h"
char bit_array[100];
unsigned int bit_number;
int value;
int result;
int main(void)
{
	value = 1;
	bit_number = 4;
	memset(bit_array,0xff,sizeof(bit_array));

	//set_bit(bit_array, bit_number);
	//clear_bit(bit_array, bit_number);


	for (int i = 10; i < 30; i++) {
		clear_bit(bit_array, i);
	}

	for (int i = 15; i < 20;i++) {
		set_bit(bit_array, i);
	}
	//assign_bit(bit_array, bit_number, value);
	for (int j = 0; j < 50; j++) {
		result = test_bit(bit_array, j);
		printf("第 %3d 位的值为%d\r\n", j, result);
	}


	while (1);
	return 0;
}

