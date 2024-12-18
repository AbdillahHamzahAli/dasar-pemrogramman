#include<stdio.h>

void chessChecker (/* parameter */) {
// write code here
}
int main() {
    char wk[3], wq[3], bk[3], bq[3], x;
    scanf("%s %s ", wk, wq);
    scanf("%s %s ", bk, bq);
    scanf("%c", &x);
    chessChecker(wk, wq, bk, bq, x);
    return 0;
}
