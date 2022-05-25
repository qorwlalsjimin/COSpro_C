#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_row_len은 2차원 배열 arr의 행(세로) 길이입니다.
// arr_col_len은 2차원 배열 arr의 열(가로) 길이입니다.
// arr[i][j]는 arr의 i번째 행의 j번째 열에 저장된 값을 의미합니다.
int solution() {
    int answer=0;
    int arr[4][4] = { 
        {5,12,4,31}, 
        {24,13,11,2}, 
        {43,44,19,26}, 
        {33,65,20,21} 
    };
    int arr_row_len = 4;
    int arr_col_len = 4;
    int k = 2;

    

    for (int i = 0; i < arr_row_len; i++)
        for (int j = 0; j < arr_col_len; j++)
            if ((4 * i + j + 1) == k) answer = arr[i][j];
    
    return answer;
}

int main() {
    printf("%d", solution());
    return 0;
}