#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];

    int num = 1;
    int t = 0, b = n - 1, l = 0, r = n - 1;

    while (num <= n*n) {
        for (int i = l; i <= r; i++) {
            arr[t][i] = num++;
        }
        t++;

        for (int i = t; i <= b; i++) {
            arr[i][r] = num++;
        }
        r--;

        if (t <= b) {
            for (int i = r; i >= l; i--) {
                arr[b][i] = num++;
            }
            b--;
        }

        if (l <= r) {
            for (int i = b; i >= t; i--) {
                arr[i][l] = num++;
            }
            l++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}