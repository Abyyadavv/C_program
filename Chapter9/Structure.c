// ...existing code...
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float salary;
} Employee;

void printEmployee(const Employee *e) {
    printf("Name: %s\nAge: %d\nSalary: %.2f\n", e->name, e->age, e->salary);
}

int main(void) {
    Employee emp = { "Amit", 30, 25000.5f };   // initialization
    printEmployee(&emp);                       // pass by pointer
    // modification
    emp.age = 31;
    strcpy(emp.name, "A Kumar");
    printEmployee(&emp);

    return 0;
}
// ...existing code...