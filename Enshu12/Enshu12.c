/*
 * Enshu12.c
 *
 *  Created on: 2024/10/27
 *      Author: win
 */

#include <stdio.h>

int findMin(int array[], int *n) {

	int minIndex = 0;
	int min, i;

	for (i = 1; i < *n; i++) {
		if (array[minIndex] > array[i]) {
			minIndex = i;
		}
	}

	min = array[minIndex];

	for (i = minIndex; i < *n - 1; i++) {
		array[i] = array[i + 1];
	}

	(*n)--;

	return min;
}

void simpleSort(int toSort[], int Sorted[], int *n) {

	int i;

	for (i = 0; i < *n; i++) {
		Sorted[i] = findMin(toSort, n);
	}
}

void showArray(int array[], int n) {

	int i;

	for (i = 0; i < n - 1; i++) {
		printf("%d, ", array[i]);
	}

	printf("%d\n", array[n - 1]);

}

int main(void) {

	int n, i;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter number of elements to sort: ");
	scanf("%d", &n);

	int toSort[n];
	int Sorted[n];

	for (i = 0; i < n; i++) {
		printf("Enter number: ");
		scanf("%d", &toSort[i]);
	}

	simpleSort(toSort, Sorted, &n);

	showArray(Sorted, n);

	return 0;
}
