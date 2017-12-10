#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

#define DIMENSION 4

int get_number_of_occurrences(int value, int array[DIMENSION][DIMENSION]);

int main() {
	int array[DIMENSION][DIMENSION];
	srand(time(NULL));   // should only be called once
	for (int i = 0; i < DIMENSION; i++) {
		for (int j = 0; j < DIMENSION; j++) {
			array[i][j] = rand() % 10;
			printf("%i\t", array[i][j]);
		}
		printf("\n\n");
	}

	printf("\n\nUnique values:\n");
	int unique[DIMENSION*DIMENSION];
	int counter = 0;
	for (int i = 0; i < DIMENSION; i++) {
		for (int j = 0; j < DIMENSION; j++) {
			if (get_number_of_occurrences(array[i][j], array) == 1) {
				unique[counter] = array[i][j];
				counter++;
			}
		}
	}

	for (int i = 0; i < counter; i++) {
		printf("%i\t", unique[i]);
	}
	printf("\n");
	_getch();
}

int get_number_of_occurrences(int value, int array[DIMENSION][DIMENSION]) {
	int result = 0;
	for (int i = 0; i < DIMENSION; i++) {
		for (int j = 0; j < DIMENSION; j++) {
			if (array[i][j] == value) {
				result++;
			}
		}
	}
	return result;
}