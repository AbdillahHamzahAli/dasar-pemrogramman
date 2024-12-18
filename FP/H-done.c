#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool oneLine(char queen[], char king[]) {
    int x1 = queen[0] - 'a';
    int y1 = queen[1] - '1';

    int x2 = king[0] - 'a';
    int y2 = king[1] - '1';

    bool res = ((x1 == x2) || (y1 == y2) || (abs(x1 - x2) == abs(y1 - y2)));
    // printf("%d", res);
    return res;
}

bool isClear(char start[], char end[], char block1[], char block2[]) {
    int x1 = start[0] - 'a', y1 = start[1] - '1';
    int x2 = end[0] - 'a', y2 = end[1] - '1';
    int dx = (x2 > x1) ? 1 : (x2 < x1) ? -1 : 0;
    int dy = (y2 > y1) ? 1 : (y2 < y1) ? -1 : 0;

    int x = x1 + dx, y = y1 + dy;
    if(y1 == y2){ // horizontal
        int distance = abs(x2 - x1);
        while(distance > 0){ // cek penghalang
            char current[3];
            current[0] = 'a' + x;
            if(current[0] == block1[0] || current[0] == block2[0]){
                return false;
            }
            x += dx;
            distance--;
        }
    } else if(x1 == x2){ // vertikal
        int distance = abs(y2 - y1);
        while(distance > 0){ // cek penghalang
            char current[3];
            current[1] = '1' + y;
            if(current[1] == block1[1] || current[1] == block2[1]){
                return false;
            }
            y += dy;
            distance--;
        }
    } else if(abs(x2 - x1) == abs(y2 - y1)){ // diagonal
        int distance = abs(x2 - x1);
        while(distance > 0){ // cek penghalang
            char current[3];
            current[0] = 'a' + x;
            current[1] = '1' + y;
            if((current[0] == block1[0] && current[1] == block1[1]) || (current[0] == block2[0] && current[1] == block2[1])){
                // printf("Blocked!\n");
                return false;
            }
            x += dx;
            y += dy;
            distance--;
        }
    }
    return true;
}

void chessChecker(char wk[], char wq[], char bk[], char bq[], char x) {
    if (x == 'w') {
        if (oneLine(wq, bk) && isClear(wq, bk, wk, bq)) {
            printf("White checked Black!\n");
        } else {
            printf("Game is still going!\n");
        }
    } else {
        if (oneLine(bq, wk) && isClear(bq, wk, wq, bk)) {
            printf("Black checked White!\n");
        } else {
            printf("Game is still going!\n");
        }
    }
}

int main() {
    char wk[3], wq[3], bk[3], bq[3], x;
    scanf("%s %s ", wk, wq);
    scanf("%s %s ", bk, bq);
    scanf("%c", &x);
    chessChecker(wk, wq, bk, bq, x);
    return 0;
}
