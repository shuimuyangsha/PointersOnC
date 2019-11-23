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
				printf("%s\r\n","����ˡ�}��");
			}
			else{
				brace -= 1;
			}
		}
	}

	if (brace == 0) {
		printf("%s\r\n","�����Ŷ��ɶԵĳ����ˡ�");
	}
	else {
		printf("%s\r\n", "�д��󣬻�����û�гɶԵĳ��֡�");
		printf("û����ԵĻ����ŵ�������%d\r\n", brace);
	}
	while (1);
	return 0;
}


