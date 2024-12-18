#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../model/model.h"

void add_flight(Flight flights[], int *count);
void display_flights(const Flight flights[], int count);
void delete_flight(Flight flights[], int *count);
void update_flight(Flight flights[], int count);
void make_reservation(Flight flights[], int count);
void cancel_reservation(Flight flights[], int count);

#endif
