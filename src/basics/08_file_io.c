#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Writes lines to a text file
int write_sample_file(const char *path) {
    FILE *f = fopen(path, "w"); // overwrite
    if (!f) {
        perror("fopen (write)");
        return -1;
    }
    fprintf(f, "Alice,28,1.68\n");
    fprintf(f, "Bob,34,1.80\n");
    fprintf(f, "Charlie,22,1.75\n");
    fclose(f);
    return 0;
}

// Reads the file line by line and prints parsed fields
int read_and_parse_file(const char *path) {
    FILE *f = fopen(path, "r");
    if (!f) {
        perror("fopen (read)");
        return -1;
    }

    char line[128];
    printf("== Reading file: %s ==\n", path);
    while (fgets(line, sizeof(line), f)) {
        // Remove trailing newline if present
        line[strcspn(line, "\r\n")] = '\0';

        // Parse "name,age,height"
        char name[32];
        int age = 0;
        float height = 0.0f;

        // Using sscanf for simplicity (robust enough for this demo)
        if (sscanf(line, "%31[^,],%d,%f", name, &age, &height) == 3) {
            printf("Name: %-8s | Age: %2d | Height: %.2f m\n", name, age, height);
        } else {
            printf("Skipping malformed line: %s\n", line);
        }
    }

    fclose(f);
    return 0;
}

int main(void) {
    // Note: CLion's default working directory is the build folder.
    // For simplicity, we use a relative file name which will be created in the *build* directory.
    const char *filename = "people.txt";

    printf("== File I/O demo ==\n");

    if (write_sample_file(filename) != 0) {
        fprintf(stderr, "Failed to write file.\n");
        return EXIT_FAILURE;
    }
    if (read_and_parse_file(filename) != 0) {
        fprintf(stderr, "Failed to read file.\n");
        return EXIT_FAILURE;
    }

    printf("\nDone.\n");
    return EXIT_SUCCESS;
}
