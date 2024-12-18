#include <stdio.h>
#include <string.h>

int main(){
    int T; scanf("%d", &T);
    char str[101];
    scanf("%s", str);
    
    for(int i = 0; i < T; i++){
        for(int j = i; j < strlen(str); j+=4){
            if(str[j] == '_'){
                printf(" ");
            } else {
                printf("%c", str[j]);
            }
        }
    }
}