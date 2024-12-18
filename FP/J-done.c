#include <stdio.h>

struct point
{
    int val;
    int x;
    int y;
};

void sorted(struct point points[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (points[j].val > points[j + 1].val) {
                struct point temp = points[j];
                points[j] = points[j + 1];
                points[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}

int binarySearch(struct point points[], int n, int target){
    int l = 0;
    int r = n - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (points[mid].val == target) {
            return mid;
        } else if (points[mid].val < target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return -1;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    struct point points[x][y];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &points[i][j].val);
            points[i][j].x = i + 1;
            points[i][j].y = j + 1;
        }
    }

    int target; 
    scanf("%d", &target);
    for(int i = 0; i < y;i++){
        sorted(points[i], x);
        int find = binarySearch(points[i], x, target);
        if(find != -1){
            printf("Element %d found at position: (%d, %d).\n", target, points[i][find].x, points[i][find].y);
            return 0;
        }
    }
    printf("Element %d not found.\n", target);

}  
