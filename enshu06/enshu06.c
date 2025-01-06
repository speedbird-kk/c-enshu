/*
 * enshu06.c
 *
 *  Created on: 2024/10/27
 */

#include <stdio.h>

int Euclid(int a, int b) {

	int remainder = a % b;

	if (remainder != 0) {
		return Euclid(b, remainder);
	} else {
		return b;
	}

}

int main(void) {

	int a, b, gcd;

	setvbuf(stdout, NULL, _IONBF, 0);

	do {
		printf("Enter first positive value: ");
		scanf("%d", &a);
	} while (a <= 0);

	do {
		printf("Enter second value: ");
		scanf("%d", &b);
	} while (b <= 0);

	gcd = Euclid(a, b);

	printf("The GCD of the two values is %d.", gcd);

	return 0;
}
