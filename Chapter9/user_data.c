// ...existing code...
#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    float salary;
} Employee;

int main(void) {
    Employee e[3];
    for (int i = 0; i < 3; ++i) {
        printf("Employee %d\n", i + 1);
        printf("Name (no spaces): ");
        scanf("%49s", e[i].name);
        printf("Age: ");
        scanf("%d", &e[i].age);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    puts("\nSaved details:");
    for (int i = 0; i < 3; ++i)
        printf("%d) %s, %d, %.2f\n", i + 1, e[i].name, e[i].age, e[i].salary);

    return 0;
}
// ...existing code...