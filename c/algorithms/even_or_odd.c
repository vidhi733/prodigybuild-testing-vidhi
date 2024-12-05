#include <stdio.h>
#include <stdlib.h>

void even_or_odd(int *numbers, int size) {
    int *even = malloc(size * sizeof(int));
    int *odd = malloc(size * sizeof(int));
    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            even[even_count++] = numbers[i];
        } else {
            odd[odd_count++] = numbers[i];
        }
    }

    printf("Even numbers: ");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd numbers: ");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    free(even);
    free(odd);
}

int main() {
    int size;
    printf("Enter the number of numbers: ");
    scanf("%d", &size);

    int *numbers = malloc(size * sizeof(int));
    printf("Enter the numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    even_or_odd(numbers, size);

    free(numbers);
    return 0;
}