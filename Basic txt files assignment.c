#include <stdio.h>

int main() {
    int choice;
    int run = 1; // To control the menu loop

    // Function to write a paragraph to a file
    void writeParagraph() {
        char paragraph[200];
        FILE *file = fopen("output.txt", "w");

        if (file == NULL) {
            printf("Error opening file for writing!\n");
            return;
        }

        printf("Enter a paragraph (up to 200 characters): ");
        getchar(); // Clear input buffer
        fgets(paragraph, sizeof(paragraph), stdin);

        fputs(paragraph, file);
        fclose(file);

        printf("Paragraph written to output.txt\n");
    }

    // Function to read a paragraph from a file
    void readParagraph() {
        char paragraph[200];
        FILE *file = fopen("output.txt", "r");

        if (file == NULL) {
            printf("Error opening file for reading!\n");
            return;
        }

        fgets(paragraph, sizeof(paragraph), file);
        fclose(file);

        printf("Content of output.txt:\n%s", paragraph);
    }

    // Function to append a paragraph to a file
    void appendParagraph() {
        char paragraph[200];
        FILE *file = fopen("output.txt", "a");

        if (file == NULL) {
            printf("Error opening file for appending!\n");
            return;
        }

        printf("Enter another paragraph (up to 200 characters): ");
        getchar(); // Clear input buffer
        fgets(paragraph, sizeof(paragraph), stdin);

        fputs(paragraph, file);
        fclose(file);

        printf("Paragraph appended to output.txt\n");
    }

    // Menu loop
    while (run) {
        printf("\nMenu:\n");
        printf("1. Write paragraph to file\n");
        printf("2. Read paragraph from file\n");
        printf("3. Append paragraph to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                writeParagraph();
                break;
            case 2:
                readParagraph();
                break;
            case 3:
                appendParagraph();
                break;
            case 4:
                run = 0; // Exit the loop
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
