#include <stdio.h>
#define row_length 2
#define col_length 4
#define size 8

int main() {
	int arr[2][4] = { { 8,4,6,1 },{ 2,9,3,5 } };
	int swap = 0;

    for (int i = 0; i < size; i++) { //0~7
        for (int j = 0; j < size-1; j++) { //0~7

            if (*(*arr + j) > *(*arr + j + 1)) {
                swap = *(*arr + j);
                *(*arr + j) = *(*arr + j + 1);
                *(*arr + j + 1) = swap;
            }

            //if (*(*arr + i) < *(*arr + j)) {
            //    int tmp = *(*arr + j);
            //    *(*arr + j) = *(*arr + i);
            //    *(*arr + i) = tmp;
            //}
        }
    }

    for (int i = 0; i < row_length; i++) {
        for (int j = 0; j < col_length; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }


    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

        }
    }

	return 0;
}