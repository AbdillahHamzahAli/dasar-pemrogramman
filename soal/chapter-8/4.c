#include <stdio.h>
#include <string.h>
int main(){
    char input[1000000];

    scanf("%s", input);

    for(int i = 0; i < strlen(input); i++){
        printf("%c", input[strlen(input) - i - 1]);
    }
}