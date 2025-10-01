#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[50], ch;
    int choice;

    printf("Enter file name: ");
    scanf("%s", filename);

    do {
        printf("\n1. Create/Write File");
        printf("\n2. Read File");
        printf("\n3. Append/Edit File");
        printf("\n4. Delete File");
        printf("\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                fp = fopen(filename, "w");
                if(fp == NULL) { printf("Error!\n"); break; }
                printf("Enter text (end with ~):\n");
                getchar(); // consume newline
                while((ch = getchar()) != '~') {
                    fputc(ch, fp);
                }
                fclose(fp);
                break;

            case 2:
                fp = fopen(filename, "r");
                if(fp == NULL) { printf("File not found!\n"); break; }
                while((ch = fgetc(fp)) != EOF) {
                    putchar(ch);
                }
                fclose(fp);
                break;

            case 3:
                fp = fopen(filename, "a");
                if(fp == NULL) { printf("Error!\n"); break; }
                printf("Enter text to append (end with ~):\n");
                getchar(); // consume newline
                while((ch = getchar()) != '~') {
                    fputc(ch, fp);
                }
                fclose(fp);
                break;

            case 4:
                if(remove(filename) == 0)
                    printf("File deleted successfully.\n");
                else
                    printf("Error deleting file.\n");
                break;
        }
    } while(choice != 5);

    return 0;
}
