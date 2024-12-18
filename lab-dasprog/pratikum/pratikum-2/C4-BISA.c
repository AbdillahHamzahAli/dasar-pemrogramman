#include <stdio.h>

int main(){
    long long N, M, F, k=0;
    scanf("%lld %lld %lld", &N, &M, &F);
    
    for (int i = 58; i >= 0; i--){
        long long batas = 1ll << i;
        if ((batas&M) != (batas&N)){
            if (batas & N){
                break;
            } else if (batas & M){
                k+= batas;
            }     
        }
    }

    if (k <= F){
        printf("HAHAHA, I CAN SAVE THE WORLD");
    } else {
        printf("OH NOOO, I FAILED");
    }
}