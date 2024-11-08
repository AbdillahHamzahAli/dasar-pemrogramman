#include <stdio.h>
#include <stdbool.h>

#define ROWS 8
#define COLS 8

bool isSafe(char maze[ROWS][COLS], int x, int y) {
    return x >= 0 && x < ROWS && y >= 0 && y < COLS && maze[x][y] == ' ';
}

bool solveMazeUtil(char maze[ROWS][COLS], int x, int y, int xDest, int yDest) {
    if (x == xDest && y == yDest) {
        return true;
    }

    if (isSafe(maze, x, y)) {
        maze[x][y] = 'X';  // Mark the current cell as visited

        if (solveMazeUtil(maze, x + 1, y, xDest, yDest)) {
            return true;
        }
        if (solveMazeUtil(maze, x, y + 1, xDest, yDest)) {
            return true;
        }
        if (solveMazeUtil(maze, x - 1, y, xDest, yDest)) {
            return true;
        }
        if (solveMazeUtil(maze, x, y - 1, xDest, yDest)) {
            return true;
        }

        maze[x][y] = ' ';
    }

    return false;
}

bool solveMaze(char maze[ROWS][COLS]) {
    return solveMazeUtil(maze, 0, 1, 7, 7);
}

int main() {
    char maze[ROWS][COLS] = {
        {' ', ' ', ' ', 'X', 'X', 'X', 'X', 'X'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'X', 'X', ' ', 'X', 'X', 'X', 'X', 'X'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'X', 'X', 'X', ' ', 'X', 'X', 'X', 'X'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'X', 'X', 'X', ' ', 'X', 'X', 'X', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
    };

    if (solveMaze(maze)) {
        printf("Path found!\n");
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                printf("%c ", maze[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("No path found.\n");
    }

    return 0;
}