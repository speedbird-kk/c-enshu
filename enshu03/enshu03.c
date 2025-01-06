/*
 * enshu03.c
 *
 *  Created on: 2024/10/27
 */

#include <stdio.h>

#define COLUMNS 9
#define ROWS 9

int main(void) {

	int i, j;

	// title row
	printf("     ");

	for (i = 1; i < COLUMNS + 1; i++) {
		printf("%5d", i);
	}

	printf("\n");

	// multiplication table
	for (i = 1; i < ROWS + 1; i++) {
		printf("%5d", i);
		for (j = 1; j < COLUMNS + 1; j++) {
			int product = i * j;
			if (product % 6 == 0) {
				printf("   ##");
			} else if (product % 3 == 0) {
				printf("   @@");
			} else if (product % 2 == 0) {
				printf("   **");
			} else {
				printf("%5d", product);
			}
		}
		printf("\n");
	}

	return 0;

}
