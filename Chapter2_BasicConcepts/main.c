#include "stdio.h"

int main(void)
{
	int character = 0;
	int brace = 0;

	while ((character = getchar()) != EOF)
	{

		if (character == '{') {
			brace += 1;
		}

		if (character == '}') {
			if (brace == 0) {
				printf("%s\r\n","多出了“}”");
			}
			else{
				brace -= 1;
			}
		}
	}

	if (brace == 0) {
		printf("%s\r\n","花括号都成对的出现了。");
	}
	else {
		printf("%s\r\n", "有错误，花括号没有成对的出现。");
		printf("没有配对的花括号的数量是%d\r\n", brace);
	}
	while (1);
	return 0;
}


