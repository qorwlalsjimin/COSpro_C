#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_row_len�� 2���� �迭 arr�� ��(����) �����Դϴ�.
// arr_col_len�� 2���� �迭 arr�� ��(����) �����Դϴ�.
// arr[i][j]�� arr�� i��° ���� j��° ���� ����� ���� �ǹ��մϴ�.
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