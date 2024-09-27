#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[101];
    int countA = 0, countI = 0, countU = 0, countE = 0, countO = 0;


    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        switch (c) {
            case 'a':
                countA++;
                break;
            case 'i':
                countI++;
                break;
            case 'u':
                countU++;
                break;
            case 'e':
                countE++;
                break;
            case 'o':
                countO++;
                break;
        }
    }

    printf("A/a : %d\n", countA);
    printf("I/i : %d\n", countI);
    printf("U/u : %d\n", countU);
    printf("E/e : %d\n", countE);
    printf("O/o : %d\n", countO);

    return 0;
}