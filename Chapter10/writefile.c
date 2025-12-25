#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("aby.txt", "a");
    int num= 555;
    fprintf(fptr, "%d", num);

    fclose(fptr);

    return 0;
}
