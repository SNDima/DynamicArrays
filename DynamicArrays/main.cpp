#include <stdio.h>
#include <conio.h>

int get_fibonacci_number(int index);

const int NUMBER_OF_ROWS = 3;
const int NUMBER_OF_COLUMNS = 4;
const int ELEMENT_MULTIPLE_TO = 3;
const int ELEMENT_INDEX_FOR_REPLACEMENT = 7;

int main() {
	// first part
	puts("First part:");
	int array[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS];
	for (int i = 0; i < NUMBER_OF_ROWS; i++) {
		for (int j = 0; j < NUMBER_OF_COLUMNS; j++) {
			array[i][j] = get_fibonacci_number(i*NUMBER_OF_COLUMNS + j);
			printf("%i\t", array[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n");

	// second part
	puts("Second part:");
	for (int i = 0; i < NUMBER_OF_ROWS; i++) {
		for (int j = 0; j < NUMBER_OF_COLUMNS; j++) {
			if (array[i][j] > 0 && array[i][j] % ELEMENT_MULTIPLE_TO == 0) {
				array[i][j] = get_fibonacci_number(ELEMENT_INDEX_FOR_REPLACEMENT);
			}
			printf("%i\t", array[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n");

	// third part
	puts("Third part:");
	for (int i = 0; i < NUMBER_OF_ROWS; i++) {
		for (int j = 0; j < NUMBER_OF_COLUMNS; j++) {
			printf("array[%i][%i] + array[%i][%i] = %i\n",
				i, j, NUMBER_OF_ROWS - i - 1, NUMBER_OF_COLUMNS - j - 1,
				array[i][j] + array[NUMBER_OF_ROWS - i - 1][NUMBER_OF_COLUMNS - j - 1]);
		}
	}

	_getch();
}

int get_fibonacci_number(int index) {
	switch (index) {
	case 0:
		return 0;
	case 1:
		return 1;
	default:
		return get_fibonacci_number(index - 1) 
			+ get_fibonacci_number(index - 2);
	}
}