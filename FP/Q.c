#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int z1, int x2, int y2, int z2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2));
}

int main() {
    int aX, aY, aZ;
    int bX, bY, bZ;
    int cX, cY, cZ;
    int rA, rB, RD;

    scanf("%d %d %d", &aX, &aY, &aZ);
    scanf("%d %d %d", &bX, &bY, &bZ);
    scanf("%d %d %d", &cX, &cY, &cZ);
    scanf("%d %d %d", &rA, &rB, &RD);

    double AB = distance(aX, aY, aZ, bX, bY, bZ);
    double BC = distance(bX, bY, bZ, cX, cY, cZ);
    double AC = distance(aX, aY, aZ, cX, cY, cZ);

    if (AC <= (double)rA * (double)RD) {
        printf("NAH ID WIN, NO NEED TO STOP");
        return 0;
    }

    if(AB >= (double)rA * (double)RD){
        printf("GIVE UP ALREADY, MINING BETTER");
        return 0;
    }

    int need = ceil(ceil(AB) / RD);
    rA -= need;
    rB += rA;

    if(BC <= (double)rB * (double)RD){
        printf("HHM BETTER TAKE ROCKET, STILL CAN WIN");
    } else{
        printf("GIVE UP ALREADY, MINING BETTER");
    }

    return 0;
}
