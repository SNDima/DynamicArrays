#include <stdio.h>
#include <conio.h>

#define DIMENSION 4

int main() {
	int array[DIMENSION];
	int number;
	bool result = false;
	printf("Please enter %i numbers\n", DIMENSION);
	for (int i = 0; i < DIMENSION; i++) {
		scanf_s("%i", &array[i]);
	}
	puts("Please enter any numbers to check whether it in the array r not");
	scanf_s("%i", &number);
	for (int i = 0; i < DIMENSION; i++) {
		if (array[i] == number) {
			result = true;
			break;
		}
	}
	if (result) {
		puts("The entered number is in array");
	}
	else {
		puts("The entered number is not in array");
	}
	_getch();
}