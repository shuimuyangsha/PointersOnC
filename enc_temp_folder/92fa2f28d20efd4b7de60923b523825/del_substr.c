#include "stdio.h"
#include "string.h"
#include "del_substr.h"

int my_strcmp(char *str1, char *str2,int str_len)
{
	int j=0,k=0;
	char *p1;
	char *p2;
	p1 = str1;
	p2 = str2;

	for (j = 0; j < str_len; j++) {
		if (*(p1+ k++) != *(p2+j)) {
			break;
		}
	}
	if (j == str_len) {
		return 1;
	}
	return 0;

	//for (; *str1 != '\0' && *str2 != '\0'; str1++, str2++) {
	//	if (*str1 != *str2) {
	//		return NULL;
	//	}
	//}
	//return str1;
}

int my_strcpy(char *str1, char *str2,int len)
{
	int i = 0;
	for (i = 0; i < len; i++) {
		*(str1 + i) = *(str2 + i);
	}

	return 0;
}

int my_strdel(char *str1, int len)
{
	int i = 0;
	for (i = 0; i < len; i++) {
		*(str1 + i) = '\0';
	}

	return 0;
}

int my_get_strlen(char *p_ch)
{
	int strlen = 0;
	while (*(p_ch++) != '\0') {
		strlen++;
	}
	return strlen;
}

int del_substr(char *str, const char  *substr)
{
	int str_len = 0;
	int str_tail_len = 0;
	int substr_len = 0;
	int i = 0, j = 0, k;
	int result;

	str_len = my_get_strlen(str);
	substr_len = my_get_strlen(substr);

	char *p1 = str;
	char *p2 = substr;

	

	for (i = 0; i <= str_len - substr_len;i++) {
		k = i;

		result = my_strcmp(p1 + k, p2, substr_len);
		if (result) {
			str_tail_len = str_len - i - substr_len;
			my_strcpy(p1 + k, p1 + k + substr_len, str_tail_len);
			my_strdel(p1 + (str_len - substr_len), substr_len);
			return result;
		}

	}
	return 0;


	//char *p_substr_temp = substr;
	//char *p_srt2 = NULL;

	//for (; *str != '\0';str++) {

	//	if (*str == *p_substr_temp) {
	//		p_substr_temp++;
	//		p_srt2 = str;
	//	}
	//	str = my_strcmp(str, p_substr_temp);

	//	if (str == NULL) {
	//		return 0;
	//	}
	//	else {
	//		my_strcpy(p_srt2, str);
	//	}
	//}
	return 0;
}


