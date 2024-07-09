#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5];
    int size_of_array = sizeof(array);
    int size_of_int = sizeof(int);

    printf("Size of the array: %d bytes\n", size_of_array);
    printf("Size of one integer: %d bytes\n", size_of_int);

    return 0;
}
