#include <stdio.h>
#include <stdlib.h>

int main() {
    int ascii;
    FILE *fptr = fopen("ascii.txt", "w");

    printf("Enter the ASCII value of a character: ");
    scanf("%d", &ascii);

    while(ascii < 65 || ascii > 122) {
        printf("Invalid input. Please enter an ASCII value between 65 and 122: ");
        scanf("%d", &ascii);
    }

    if (ascii >= 65 && ascii <= 90) {
        for (int ch = 65; ch <= 90; ch++) {
            fprintf(fptr, "%d\t%c\n", ch, ch);
        }
    } else {
        for (int ch = 97; ch <= 122; ch++) {
            fprintf(fptr, "%d\t%c\n", ch, ch);
        }
    }
    
    fclose(fptr);
    return 0;
}
