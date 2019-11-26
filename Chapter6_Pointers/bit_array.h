#ifndef BIT_ARRAY_H
#define BIT_ARRAY_H

#ifndef FALSE
#define FALSE 0
#define TRUE  1
#endif // !FALSE

void set_bit(char bit_array[],unsigned int bit_number);
void clear_bit(char bit_array[], unsigned int bit_number);
void assign_bit(char bit_array[], unsigned int bit_number,int value);
int test_bit(char bit_array[], unsigned int bit_number);
#endif // !BIT_ARRAY_H


