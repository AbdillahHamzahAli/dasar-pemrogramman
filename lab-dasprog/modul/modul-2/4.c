#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n-1];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = n-1; i>=0; i--){
        printf("%d\n", arr[i]);
    }
}