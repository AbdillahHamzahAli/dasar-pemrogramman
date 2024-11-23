#include <stdio.h>

void mergeFiles(FILE* file1, FILE* file2, FILE* output){
    char ch;

    if(file1 == NULL || file2 == NULL || output == NULL) return;

    while((ch = fgetc(file1)) != EOF){
        fputc(ch, output);
    }
    
    fputc('\n', output);

    while((ch = fgetc(file2)) != EOF){
        fputc(ch, output);
    }
    printf("Files merged successfully.\n");
}

int main(){
    FILE* file1 = fopen("file1.txt", "r");
    FILE* file2 = fopen("file2.txt", "r");
    FILE* output = fopen("output.txt", "w");

    mergeFiles(file1, file2, output);

    fclose(file1);
    fclose(file2);
    fclose(output);
}