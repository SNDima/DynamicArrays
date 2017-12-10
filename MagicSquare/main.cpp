#include <stdio.h>
#include <conio.h>

#define DIMENSION 3

bool is_magic(int matrix[DIMENSION][DIMENSION]);

int main() {
	int matrix[DIMENSION][DIMENSION];
	printf("Please enter a squire matrix with dimension %i\n", DIMENSION);
	for (int i = 0; i < DIMENSION; i++) {
		for (int j = 0; j < DIMENSION; j++) {
			scanf_s("%i", &matrix[i][j]);
		}
	}
	if (is_magic(matrix)) {
		puts("Your squire is magic!");
	}
	else {
		puts("Your squire is not magic!");
	}
	_getch();
}

bool is_magic(int matrix[DIMENSION][DIMENSION]) {
	int sum = 0;
	int temp;

	for (int i = 0; i < DIMENSION; i++) {
		temp = 0;
		for (int j = 0; j < DIMENSION; j++) {
			if (i == 0) {
				sum += matrix[i][j];
			}
			else {
				temp += matrix[i][j];
			}
		}
		if (i != 0 && temp != sum) {
			return false;
		}
	}

	for (int i = 0; i < DIMENSION; i++) {
		temp = 0;
		for (int j = 0; j < DIMENSION; j++) {
			temp += matrix[j][i];
		}
		if (temp != sum) {
			return false;
		}
	}

	for (int i = 0; i < DIMENSION; i++) {
		temp = 0;
		for (int j = 0; j < DIMENSION; j++) {
			temp += matrix[j][i];
		}
		if (temp != sum) {
			return false;
		}
	}

	temp = 0;
	for (int i = 0; i < DIMENSION; i++) {
		for (int j = 0; j < DIMENSION; j++) {
			if (i == j) {
				temp += matrix[i][j];
			}
		}
	}
	if (temp != sum) {
		return false;
	}

	temp = 0;
	for (int i = 0; i < DIMENSION; i++) {
		for (int j = 0; j < DIMENSION; j++) {
			if (i + j + 1 == DIMENSION) {
				temp += matrix[i][j];
			}
		}
	}
	if (temp != sum) {
		return false;
	}

	return true;
}