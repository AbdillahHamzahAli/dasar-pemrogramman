#include <stdio.h>

int grid[5][5] = {
    {1, 1, 0, 1, 0},
    {1, 1, 0, 0, 0},
    {0, 0, 0, 1, 0},
    {0, 0, 0, 1, 0},
    {1, 1, 0, 0, 0}
};

int blob_check(int x, int y) {
    if (x < 0 || x >= 5 || y < 0 || y >= 5 || grid[x][y] == 0) {
        return 0;
    }

    grid[x][y] = 0;

    blob_check(x, y - 1);
    blob_check(x, y + 1);
    blob_check(x - 1, y);
    blob_check(x + 1, y);

    return 1;
}

int main() {
    int total_blobs = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (grid[i][j] == 1) {
                total_blobs += blob_check(i, j);
            }
        }
    }

    printf("Total number of blobs: %d\n", total_blobs);

    return 0;
}