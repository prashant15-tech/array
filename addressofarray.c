#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};

    // Print the address of each element in the array
    for(int i = 0; i < 5; i++) {
        printf("Address of array[%d]: %p\n", i, (void*)&array[i]);
    }

    return 0;
}
