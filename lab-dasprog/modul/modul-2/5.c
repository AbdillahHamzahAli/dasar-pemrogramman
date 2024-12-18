#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[101];
    int count[5] = {0};
    char vowels[] = "aiueo";

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        for (int j = 0; j < 5; j++) {
            if (c == vowels[j]) {
                count[j]++;
                break;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%c/%c : %d\n", toupper(vowels[i]), vowels[i], count[i]);
    }

    return 0;
}