#include <stdio.h>

void bubbleSort(int array[], int size) {
	int pass, i, temp;
	int swapped; 

	for (pass = 1; pass < size; pass++) {
		swapped = 0; 

		for (i = 0; i < size - pass; i++) {
			if (array[i] > array[i + 1]) {
				
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				swapped = 1; 
			}
		}

		if (swapped == 0) {
			
			break;
		}
	}
}

int main() {
	int data[] = { 64, 34, 25, 12, 22, 11, 90 };
	int size = sizeof(data) / sizeof(data[0]);

	printf("Original array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", data[i]);
	}

	bubbleSort(data, size);

	printf("\nSorted array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", data[i]);
	}

	return 0;
}
