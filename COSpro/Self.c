#include <stdio.h>
#define length 4

int main() {
	int arr[] = { 8,4,6,1 };
	int swap = 0;
	for (int i = length-1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j+1]) {
				swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
			}
		}
	}

	for (int i = 0; i < length; i++)
		printf("%d", arr[i]);

	return 0;
}