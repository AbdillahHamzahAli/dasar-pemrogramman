#ifndef MODEL_H
#define MODEL_H

#include <stdio.h>
#include <string.h>

#define MAX_FLIGHTS 100

typedef struct {
    char flight_number[10];
    char departure_city[50];
    char destination[50];
    char departure_date[20];
    char departure_time[10];
    char arrival_date[20];
    char arrival_time[10];
    int first_class_available;
    int first_class_sold;
    int coach_available;
    int coach_sold;
} Flight;

int save_flight_data_text(const Flight flights[], int count, const char *filename);
int load_flight_data_text(Flight flights[], int *count, const char *filename);

#endif
