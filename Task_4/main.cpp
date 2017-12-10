#include <stdio.h>
#include <conio.h>

#define DIMENSION 5

int get_sum_of_even_elements(int array[DIMENSION]);
int get_sum_of_odd_elements(int array[DIMENSION]);

int main() {
	int array[DIMENSION];
	printf("Please enter %i numbers:\n", DIMENSION);
	for (int i = 0; i < DIMENSION; i++) {
		scanf_s("%i", &array[i]);
	}
	printf("Even sum: %i\n", get_sum_of_even_elements(array));
	printf("Odd sum: %i\n", get_sum_of_odd_elements(array));
	_getch();
}

int get_sum_of_even_elements(int array[DIMENSION]) {
	int sum = 0;
	for (int i = 0; i < DIMENSION; i+=2) {
		sum += array[i];
	}
	return sum;
}

int get_sum_of_odd_elements(int array[DIMENSION]) {
	int sum = 0;
	for (int i = 1; i < DIMENSION; i += 2) {
		sum += array[i];
	}
	return sum;
}