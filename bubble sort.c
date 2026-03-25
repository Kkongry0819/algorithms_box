#include <stdio.h>

#define MAX 500

int n;
int arr[MAX];

void input_n() {
    printf("Enter number of elements:\n");
    scanf("%d", &n);
}

void input_arr() {
    printf("Enter numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void print_arr() {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubble_sort_asc() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}


void bubble_sort_desc() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

int main() {
    int type;

    printf("Bubble Sort\n");
    printf("1. Ascending\n2. Descending\n");
    scanf("%d", &type);

    input_n();
    input_arr();

    if (type == 1)
        bubble_sort_asc();
    else
        bubble_sort_desc();

    printf("Result:\n");
    print_arr();

    return 0;
}