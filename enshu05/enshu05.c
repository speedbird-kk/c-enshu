/*
 * enshu05.c
 *
 *  Created on: 2024/10/27
 *      Author: win
 */

#include <stdio.h>

char hexToDec(char hex) {

	char dec;

	if (hex <= '9') {
		dec = hex - '0';
	} else {
		dec = hex - 'a' + 10;
	}

	return dec;
}

int main(void) {

	char hex;
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter hex: ");
	scanf("%c", &hex);

	if ((hex >= '0' && hex <= '9') || (hex >= 'a' && hex <= 'f')) {
		printf("%d\n", hexToDec(hex));
	} else {
		printf("Not hex\n");
	}

	return 0;
}
