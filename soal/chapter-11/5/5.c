#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void printUpperCase(const char *infile) {
    FILE *input = fopen(infile, "r");
    if(input == NULL) return;

    printf("Uppercase characters: ");
    char ch;
    while ((ch = fgetc(input)) != EOF) {
        if (isupper(ch)) {
            printf("%c", ch);
        }
    }
    printf("\n");
    fclose(input);
}

void extractLinesStartWithA(const char *infile) {
    FILE *input = fopen(infile, "r");
    if (input == NULL) return;

    char line[1024];
    int i = 1;
    printf("Lines starting with 'A':\n");
    while (fgets(line, sizeof(line), input)) {
        if (line[0] == 'A') {
            printf("%d. %s", i++,line);
        }
    }
    printf("\n");
    fclose(input);
}



int main() {
    char *input = "input.txt";

    printUpperCase(input);
    extractLinesStartWithA(input);

    return 0;
}