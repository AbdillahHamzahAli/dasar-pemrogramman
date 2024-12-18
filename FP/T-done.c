#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char binToChar(char *binary) {
    int decimal = 0;
    for (int i = 0; i < 8; i++) {
        decimal = decimal * 2 + (*(binary+i) - '0');
    }
    return (char)decimal;
}

void find(char data[5][5][9], char *word) {
    int found = 0;
    int len = strlen(word);
    // printf("len %d\n", len);

    // Horizontal 
    for (int i = 0; i < 5; i++) {
        char* cWord = (char*)malloc(6 * sizeof(char));
        memset(cWord, 0, 6);
        for (int j = 0; j <= 5 - len; j++) {
            for (int k = 0; k < len; k++) {
                *(cWord + k) = binToChar(*(*(data + i) + (j + k)));
            }
            if (strcmp(cWord, word) == 0) {
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    // Vertical 
    if (!found) {
        for (int j = 0; j < 5; j++) {
            char* cWord = (char*)malloc(6 * sizeof(char));
            memset(cWord, 0, 6);
            for (int i = 0; i <= 5 - len; i++) {
                for (int k = 0; k < len; k++) {
                    *(cWord + k) = binToChar(*(*(data + (i + k)) + j));
                }
                if (strcmp(cWord, word) == 0) {
                    found = 1;
                    break;
                }
            }
            if (found) break;
        }
    }

    if (found) {
        printf("%s found", word);
    } else {
        printf("Failed to find the specified word: %s\n", word);
    }
}

int main() {
    char word[6];
    scanf("%s", word);

    char data[5][5][9];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%s", data[i][j]);
        }
    }

    find(data, word);

    return 0;
}
