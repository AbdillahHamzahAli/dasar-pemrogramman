#include <stdio.h>
#include <string.h>
#define SIZE 2  

void printList(char names[][30], int ages[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s %d\n", names[i], ages[i]);
    }
}

void sortAlphabetically(char names[][30], int ages[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                
                char tempName[30];
                strcpy(tempName, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], tempName);

                int tempAge = ages[i];
                ages[i] = ages[j];
                ages[j] = tempAge;
            }
        }
    }
}

int main() {
    char names[SIZE][30];
    int ages[SIZE];

    printf("Masukkan %d nama dan umur:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Nama ke-%d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; // Menghilangkan newline di akhir input

        printf("Umur ke-%d: ", i + 1);
        scanf("%d", &ages[i]);
        getchar(); // Untuk membersihkan karakter newline dari buffer
    }

    printf("\nOriginal list\n");
    printf("-----------------------------\n");
    printList(names, ages, SIZE);

    // Sort names
    sortAlphabetically(names, ages, SIZE);

    printf("\nAlphabetized list\n");
    printf("-----------------------------\n");
    printList(names, ages, SIZE);

    return 0;
}
