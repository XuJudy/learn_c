// 编写选择排序的函数，并递归调用

#include <stdio.h>

void selection_sort(int arr[], int n);

int main() {

    int arr[100], n = 0, i;

    printf("Enter integers: ");

    while (1) {

        int num;
        if (scanf("%d", &num) == EOF)
            break;

        arr[n++] = num;

        if (getchar() == '\n')
            break;
    }

    selection_sort(arr, n);
    printf("Integers arranged in order from smallest to largest: ");

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

void selection_sort(int arr[], int n) {

    int i, j, max_index, temp;

    if (n == 1) {
        return;
    }
    for (i=0; i<n-1; i++) {

        max_index = 0;
        for (j=1; j<n-i; j++) {

            if (arr[j] > arr[max_index])
                max_index = j;
        }

        temp = arr[max_index];
        arr[max_index] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    
    selection_sort(arr, n - 1);
}