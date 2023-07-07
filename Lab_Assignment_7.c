#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int array[], int size, int swapsNeeded[]) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                swapsNeeded[j]++;
            }
        }
    }
}

void printSwapsNeeded(int swapsNeeded[], int size) {
    printf("The number of swaps needed for each index:\n");
    for (int i = 0; i < size; i++) {
        printf("Index (%d) needs %d swaps\n", i, swapsNeeded[i]);
    }

}void printSortedArray(int array[], int size) {
    printf("\nThe Sorted Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int swapsNeeded[size];

    for (int i = 0; i < size; i++) {
        swapsNeeded[i] = 0;
    }

    bubbleSort(numbers, size, swapsNeeded);

printSwapsNeeded(swapsNeeded, size);
 
printSortedArray(numbers, size);

    return 0;
}
