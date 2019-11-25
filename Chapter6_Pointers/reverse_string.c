#include "reverse_string.h"
#include "stdio.h"
#include "string.h"
#include "del_substr.h"

void reverse_string(char *string)
{
	int string_len = 0;
	int i;
	char *p1;
	char ch1;
	string_len = my_get_strlen(string);

	for (i = 0; i < string_len/2;i++) {
		ch1 = *(string + i);
		*(string + i) = *(string + ((string_len-1) - i));
		*(string + ((string_len-1) - i)) = ch1;
	}
}


