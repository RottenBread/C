#include <stdio.h>

int main(void) {
	char character;
	while (1) {
		printf("�ҹ��ڸ� �Է��Ͻÿ�: ");
		scanf(" %c", &character);

		if (character == 'Q') //esc
			break;
		if (character < 'a' || character > 'z')
			continue;

		character -= 32;
		printf("��ȯ�� �빮�ڴ� %c �Դϴ�.\n", character);
	}
	return 0;
}