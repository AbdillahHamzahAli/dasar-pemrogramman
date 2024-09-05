#include <stdio.h>
#include <math.h>

int main(void)
{
    float takeoff_speed_ms, distance;
    printf("masukan kecepatan takeoff(km/jam) dan jarak(meter) : ");

    /* masukan kecepatan takeoff(km/jam) dan jarak(meter) */
    scanf("%f %f", &takeoff_speed_ms, &distance);

    /* hitung percepatan */
    float acceleration = pow(takeoff_speed_ms, 2) / (2 * distance);

    /* hitung waktu */
    float time = takeoff_speed_ms / acceleration;

    /* tampilkan hasil [percepatan, waktu] */
    printf("percepatan : %.2f m/s^2 \n waktu : %.2f detik", acceleration, time);

    return 0;
}