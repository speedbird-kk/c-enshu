/*
 * enshu01.c
 *
 *  Created on: 2024/10/27
 *      Author: win
 */

#include <stdio.h>

int main(void) {

	int age;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter age: \n");

	scanf("%d", &age);

	if (age >= 0 && age <= 20) {
		printf("未成年です。\n地方自治体によって医療費が\\200のところも\n");
	} else if (age >= 20 && age < 60) {
		printf("成年です。\n飲酒喫煙は控えめに\n");
	} else if (age >= 60) {
		printf("定年後も元気100%%ですごしてください\n");
	} else {
		printf("Invalid input");
	}

	return 0;
}
