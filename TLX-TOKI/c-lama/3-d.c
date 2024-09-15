#include <stdio.h>

int main(void){
    int n,m,bagi,sisa;
    scanf("%d %d",&n,&m);
    sisa = n % m;
    bagi = (n -sisa) / m;
    printf("masing-masing %d \nbersisa %d\n",bagi,sisa);

    return 0;
}