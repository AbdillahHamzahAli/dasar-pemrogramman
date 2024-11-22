#include <stdio.h>
#include <stdbool.h>

typedef struct {
    double voltage;        // Tegangan (volt)
    double max_energy;     // Kapasitas energi maksimum (joule)
    double current_energy; // Energi saat ini (joule)
} battery_t;

void input_battery(battery_t *b);
void output_battery(const battery_t *b);
bool power_device(battery_t *b, double current, double time);
double max_time(const battery_t *b, double current);
void recharge(battery_t *b);

int main() {
    battery_t battery;
    int choice;

    printf("Masukkan informasi baterai:\n");
    input_battery(&battery);

    do {
        printf("\n=== Menu ===\n");
        printf("1. Lihat informasi baterai\n");
        printf("2. Gunakan baterai untuk perangkat\n");
        printf("3. Hitung waktu maksimum perangkat\n");
        printf("4. Isi ulang baterai\n");
        printf("0. Keluar\n");
        printf("Pilihan Anda: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            output_battery(&battery);
            break;
        case 2: {
            double current, time;
            printf("Masukkan arus perangkat (ampere): ");
            scanf("%lf", &current);
            printf("Masukkan waktu perangkat digunakan (detik): ");
            scanf("%lf", &time);

            if (power_device(&battery, current, time)) {
                printf("Perangkat berhasil digunakan.\n");
            } else {
                printf("Energi tidak cukup untuk menggunakan perangkat selama %.2f detik.\n", time);
            }
            break;
        }
        case 3: {
            double current;
            printf("Masukkan arus perangkat (ampere): ");
            scanf("%lf", &current);

            double max_operating_time = max_time(&battery, current);
            printf("Baterai dapat mendukung perangkat selama %.2f detik.\n", max_operating_time);
            break;
        }
        case 4:
            recharge(&battery);
            printf("Baterai telah diisi ulang ke kapasitas maksimum.\n");
            break;
        case 0:
            printf("Keluar dari program.\n");
            break;
        default:
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (choice != 0);

    return 0;
}

void input_battery(battery_t *b) {
    printf("Masukkan tegangan baterai (volt): ");
    scanf("%lf", &b->voltage);
    printf("Masukkan kapasitas maksimum baterai (joule): ");
    scanf("%lf", &b->max_energy);
    printf("Masukkan energi saat ini pada baterai (joule): ");
    scanf("%lf", &b->current_energy);
}

void output_battery(const battery_t *b) {
    printf("\nInformasi Baterai:\n");
    printf("Tegangan: %.2f V\n", b->voltage);
    printf("Energi Maksimum: %.2f J\n", b->max_energy);
    printf("Energi Saat Ini: %.2f J\n", b->current_energy);
}

bool power_device(battery_t *b, double current, double time) {
    double power = b->voltage * current; 
    double energy_needed = power * time;

    if (b->current_energy >= energy_needed) {
        b->current_energy -= energy_needed;
        return true;
    }
    return false;
}

double max_time(const battery_t *b, double current) {
    double power = b->voltage * current;
    return b->current_energy / power;
}

void recharge(battery_t *b) {
    b->current_energy = b->max_energy;
}
