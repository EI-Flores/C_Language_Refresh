#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 50
#define MAX_STUDENTS 100

typedef struct {
    char name[MAX_NAME];
    int grade;
} Student;

int main() {
    FILE *file = fopen("src/grades.csv", "r");
    if (!file) {
        printf("Error: could not open grades.csv\n");
        return 1;
    }

    Student students[MAX_STUDENTS];
    int count = 0;

    while (fscanf(file, "%49[^,],%d\n", students[count].name, &students[count].grade) == 2) {
        count++;
    }
    fclose(file);

    if (count == 0) {
        printf("No data found.\n");
        return 1;
    }

    int sum = 0, min = students[0].grade, max = students[0].grade;
    for (int i = 0; i < count; i++) {
        sum += students[i].grade;
        if (students[i].grade < min) min = students[i].grade;
        if (students[i].grade > max) max = students[i].grade;
    }

    double avg = (double) sum / count;

    printf("Processed %d students\n", count);
    printf("Average grade: %.2f\n", avg);
    printf("Min grade: %d\n", min);
    printf("Max grade: %d\n", max);

    return 0;
}
