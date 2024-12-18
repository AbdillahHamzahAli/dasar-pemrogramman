#include <stdio.h>
#include <string.h>

int main(){
    char str[1001];
    int arr[27] = {0};
    fgets(str, sizeof(str), stdin);

    // printf("%d\n", strlen(str));
    for(int i = 0; i < 1001; i++){
        if(str[i] == '\0'){
            break;
        }
        arr[str[i] - 'a']++;
    }
    int cek = 0;
    for(int i = 0; i < 27; i++){
        if(arr[i] == 0){
            cek++;
        }
    }
    if(cek == 27){
        printf("hmmm, i don't have anything to show");
        return 0;
    }
    int max = 0, rex = 0;
    // printf("%s\n", str);
    for(int i = 0; i < 27; i++){
        if(arr[i] != 0){
            if(arr[i] > max){
                max = arr[i];
                rex = i;
            }
            printf("%c: %d\n", 'a' + i, arr[i]);
        }
    }
    // int db = 0;
    for(int i = 0; i < 27; i++){
        if(arr[i] != 0){
            if(arr[i] >= max && i < rex){
                max = arr[i];
                rex = i;
            }
        }
    }
    
    printf("Most frequent character: %c with count: %d", 'a' + rex, max);

}