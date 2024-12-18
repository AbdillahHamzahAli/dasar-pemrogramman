#include <stdio.h>

unsigned long long lcm(int x, int y){
    int max = x > y ? x : y;
    for(unsigned long long i = max; i <= x*y; i++){
        if(i % x == 0 && i % y == 0){
            return i;
        }
    }
}

int main(){
    int x , y;
    scanf("%d %d", &x ,&y);
    printf("%llu", lcm(x,y));
}