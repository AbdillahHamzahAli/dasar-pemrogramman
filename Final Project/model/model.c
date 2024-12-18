#include "model.h"

int save_flight_data_text(const Flight flights[], int count, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        perror("Failed to save text data");
        return -1;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%s;%s;%s;%s;%s;%s;%s;%d;%d;%d;%d\n",
                flights[i].flight_number,
                flights[i].departure_city,
                flights[i].destination,
                flights[i].departure_date,
                flights[i].departure_time,
                flights[i].arrival_date,
                flights[i].arrival_time,
                flights[i].first_class_available,
                flights[i].first_class_sold,
                flights[i].coach_available,
                flights[i].coach_sold);
    }

    fclose(file);
    return 0;
}

int load_flight_data_text(Flight flights[], int *count, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        *count = 0; // Jika file belum ada, anggap kosong
        return 0;
    }

    *count = 0;
    while (fscanf(file, "%9[^;];%49[^;];%49[^;];%19[^;];%9[^;];%19[^;];%9[^;];%d;%d;%d;%d\n",
                  flights[*count].flight_number,
                  flights[*count].departure_city,
                  flights[*count].destination,
                  flights[*count].departure_date,
                  flights[*count].departure_time,
                  flights[*count].arrival_date,
                  flights[*count].arrival_time,
                  &flights[*count].first_class_available,
                  &flights[*count].first_class_sold,
                  &flights[*count].coach_available,
                  &flights[*count].coach_sold) == 11) {
        (*count)++;
    }

    fclose(file);
    return 0;
}
