#include <stdio.h>
#include <string.h>
#define MAX 1000000

int main() {
    char str[MAX], str2[MAX];
    scanf("%s", str);
    scanf("%s", str2);

    if (strstr(str, str2) != NULL) {
        printf("'%s' ditemukan di dalam '%s'\n", str2, str);
    } else {
        printf("'%s' tidak ditemukan di dalam '%s'\n", str2, str);
    }
    return 0;
}