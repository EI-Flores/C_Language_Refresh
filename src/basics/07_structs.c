#include <stdio.h>
#include <string.h>   // for strncpy
#include <stddef.h>   // for size_t

// Type definition for a Person
typedef struct {
    char name[32];
    int age;
    float height; // meters
} Person;

// Prints a Person
void print_person(const Person *p) {
    if (!p) return;
    printf("Name: %s | Age: %d | Height: %.2f m\n", p->name, p->age, p->height);
}

// Computes average age over an array of Person
double average_age(const Person *arr, size_t n) {
    if (!arr || n == 0) return 0.0;
    long sum = 0;
    for (size_t i = 0; i < n; ++i) sum += arr[i].age;
    return (double)sum / (double)n;
}

int main(void) {
    // Initialize using designated initializers (C17 friendly)
    Person p1 = { .name = "Alice", .age = 28, .height = 1.68f };
    Person p2 = { .name = "Bob",   .age = 34, .height = 1.80f };

    // Create and fill another person safely
    Person p3;
    strncpy(p3.name, "Charlie", sizeof(p3.name) - 1);
    p3.name[sizeof(p3.name) - 1] = '\0'; // ensure null-termination
    p3.age = 22;
    p3.height = 1.75f;

    printf("== Single persons ==\n");
    print_person(&p1);
    print_person(&p2);
    print_person(&p3);

    // Array of persons
    Person team[] = { p1, p2, p3 };
    size_t n = sizeof(team) / sizeof(team[0]);

    printf("\n== Team ==\n");
    for (size_t i = 0; i < n; ++i) {
        printf("[%zu] ", i);
        print_person(&team[i]);
    }

    // Average age
    double avg = average_age(team, n);
    printf("\nAverage age: %.2f\n", avg);

    return 0;
}
