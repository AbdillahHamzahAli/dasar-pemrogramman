#include <stdio.h>
#define MAX 7

int matrix[MAX][MAX];
int visited[MAX][MAX];
int N, M;
int paths = 0;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int isValid(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < M && !visited[x][y] && (matrix[x][y] % 2 != 0 || matrix[x][y] == 1));
}

void findPaths(int x, int y) {
    if (matrix[x][y] == 1) {
        paths++;
        return;
    }

    visited[x][y] = 1;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (isValid(nx, ny)) {
            findPaths(nx, ny);
        }
    }

    visited[x][y] = 0; 
}

int main() {
    scanf("%d %d", &N, &M);

    int startX = -1, startY = -1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
            visited[i][j] = 0;
            if (matrix[i][j] == 0) {
                startX = i;
                startY = j;
            }
        }
    }

    if (startX != -1 && startY != -1) {
        findPaths(startX, startY);
    }

    if (paths > 0) {
        printf("Terdapat %d jalan untuk kucing oren pulang\n", paths);
    } else {
        printf("Kucing oren tidak bisa pulang ke rumah :(\n");
    }

    return 0;
}