#include <stdio.h>
#include <stdlib.h>

struct point 
{
    int x;
    int y;
};

double distance(struct point a, struct point b) {
    if((a.x - b.x) == 0 || (a.y - b.y) == 0) {
        return abs(a.x - b.x) + abs(a.y - b.y);
    } else {
        // diagonal
        return pow((pow(a.x - b.x, 2) + pow(a.y - b.y, 2)),0.5);
    }
}

int main() {
    int n; scanf("%d", &n);
    struct point arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    double min = distance(arr[0], arr[1]);
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (distance(arr[i], arr[j]) < min) {
                min = distance(arr[i], arr[j]);        
            }
        }
    }

    printf("%.2lf", min);

}