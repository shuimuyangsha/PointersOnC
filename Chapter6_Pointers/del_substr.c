#include "stdio.h"
#include "string.h"
#include "del_substr.h"

char *my_strcmp(char *str1, char *str2)
{
	for (; *str1 != '\0' && *str2 != '\0'; str1++, str2++) {
		if (*str1 != *str2) {
			return NULL;
		}
	}
	return str1;
}

char *my_strcpy(char *str1, char *str2)
{
	char *str_result;
	str_result = str1;
	for (; *str2 != '\0'; str1++, str2++) {
		*str1 = *str2;
	}

	return str_result;
}

int del_substr(char *str, char const *substr)
{
	char *p_substr_temp = substr;
	char *p_srt2 = NULL;

	for (; *str != '\0';str++) {

		if (*str == *p_substr_temp) {
			p_substr_temp++;
			p_srt2 = str;
		}
		str = my_strcmp(str, p_substr_temp);

		if (str == NULL) {
			return 0;
		}
		else {
			my_strcpy(p_srt2, str);
		}
	}
	return 0;
}


