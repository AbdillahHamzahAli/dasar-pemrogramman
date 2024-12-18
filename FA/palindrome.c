#include <stdio.h>
#include <string.h>

int main(){
    char str[257];
    scanf("%s", str);
    int len = strlen(str);
    int i = 0;
    int j = len-1;
    while(i < j){
        if(str[i] != str[j]){
            printf("BUKAN PALINDROM\n");
            return;
        }
        i++;
        j--;
    }
    printf("PALINDROM\n");
}