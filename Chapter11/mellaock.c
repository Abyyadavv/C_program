#include <stdlib.h>

int *ptr = (int *)malloc(5 * sizeof(int));  // Allocate space for 5 integers

if (ptr != NULL) {
    ptr[0] = 10;  // Use the allocated memory
    free(ptr);    // Don't forget to free memory!
}