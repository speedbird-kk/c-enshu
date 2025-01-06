/*
 * enshu02.c
 *
 *  Created on: 2024/10/27
 *      Author: win
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
			printf("%5d", i * j);
		}
		printf("\n");
	}

}
