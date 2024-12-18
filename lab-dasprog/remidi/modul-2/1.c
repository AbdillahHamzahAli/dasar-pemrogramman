#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int n;
    char str[1001];
    scanf("%d\n", &n);

    fgets(str, sizeof(str), stdin);

    int i = 0;
    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            int m = str[i] + n;
            if(m > 'z') {
                m = m - 26;
            } else if(m < 'a') {
                m = m + 26;
            }
            str[i] = m;
        }
        i++;
    }
    printf("%s", str);
}