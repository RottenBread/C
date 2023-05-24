#include <stdio.h>

int main(void) {
	char character;
	while (1) {
		printf("소문자를 입력하시오: ");
		scanf(" %c", &character);

		if (character == 'Q') //esc
			break;
		if (character < 'a' || character > 'z')
			continue;

		character -= 32;
		printf("변환된 대문자는 %c 입니다.\n", character);
	}
	return 0;
}