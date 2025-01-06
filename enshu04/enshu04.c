/*
 * enshu04.c
 *
 *  Created on: 2024/10/27
 */

#include <stdio.h>

int main(void) {

	char beforeChar;

	setvbuf(stdout, NULL, _IONBF, 0);

	while(1) {
		printf("Enter one letter: ");
		scanf(" %c", &beforeChar);

		getchar();

		if (beforeChar >= 'A' && beforeChar <= 'Z') {
			printf("%c\n", beforeChar + 32);
			break;
		} else if (beforeChar >= 'a' && beforeChar <= 'z') {
			printf("%c\n", beforeChar - 32);
			break;
		} else {
			printf("Invalid input.\n");
		}
	}

	return 0;
}
