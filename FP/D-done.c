#include <stdio.h>
#include <string.h>

int main(){
    char nama[10];
    int n;
    scanf("%s %d", nama, &n);
    unsigned long long res = 0;
    if(strcmp(nama,"Ellie") == 0){
        for(int i = 1; i <= n; i++){
            if(i % 2 == 0){
                res += i;
            }
        }
        printf("%llu", res);
    } else if (strcmp(nama,"Oddie") == 0){
        for(int i = 1; i <= n; i++){
            if(i % 2 != 0){
                res += i;
            }
        }
        printf("%llu", res);
    } else{
        printf("Who is that?");
    }
    
}