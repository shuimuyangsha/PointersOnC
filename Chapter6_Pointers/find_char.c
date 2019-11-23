#include "stdio.h"
#include "find_char.h"

char *find_char(char const *source, char const *chars)
{
	for (; *chars != NULL; chars++) {
		for (; *source != NULL; source++) {
			if (*source == *chars) {
				//printf("%p\r\n", source);
				//printf("%c\r\n", *source);
				return source;
			}
		}
	}
	return NULL;
}


