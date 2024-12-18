#include "controller.h"

void add_flight(Flight flights[], int *count) {
    if (*count >= MAX_FLIGHTS) {
        printf("Flight limit reached.\n");
        return;
    }
    Flight new_flight;
    printf("Enter flight number: ");
    scanf("%s", new_flight.flight_number);
    printf("Enter departure city: ");
    scanf("%s", new_flight.departure_city);
    printf("Enter destination: ");
    scanf("%s", new_flight.destination);
    printf("Enter departure date (YYYY-MM-DD): ");
    scanf("%s", new_flight.departure_date);
    printf("Enter departure time (HH:MM): ");
    scanf("%s", new_flight.departure_time);
    printf("Enter arrival date (YYYY-MM-DD): ");
    scanf("%s", new_flight.arrival_date);
    printf("Enter arrival time (HH:MM): ");
    scanf("%s", new_flight.arrival_time);
    printf("Enter available first-class seats: ");
    scanf("%d", &new_flight.first_class_available);
    printf("Enter available coach seats: ");
    scanf("%d", &new_flight.coach_available);
    new_flight.first_class_sold = 0;
    new_flight.coach_sold = 0;

    flights[*count] = new_flight;
    (*count)++;
    printf("Flight added successfully.\n");
}

void display_flights(const Flight flights[], int count) {
    if (count == 0) {
        printf("No flights available.\n");
        return;
    }

    printf("\nAvailable Flights:\n");
    printf("-------------------------------------------------------------\n");
    printf("| %-10s | %-15s | %-15s | %-10s | %-10s |\n", 
           "Flight No", "Departure City", "Destination", "Departure", "Arrival");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("| %-10s | %-15s | %-15s | %-10s | %-10s |\n",
               flights[i].flight_number, 
               flights[i].departure_city, 
               flights[i].destination,
               flights[i].departure_date, 
               flights[i].arrival_date);
    }

    printf("-------------------------------------------------------------\n");

    printf("\nDetailed Flight Information:\n");
    for (int i = 0; i < count; i++) {
        printf("\nFlight Number: %s\n", flights[i].flight_number);
        printf("  Departure: %s, %s at %s\n", flights[i].departure_city, flights[i].departure_date, flights[i].departure_time);
        printf("  Arrival: %s, %s at %s\n", flights[i].destination, flights[i].arrival_date, flights[i].arrival_time);
        printf("  First Class Seats: %d available, %d sold\n", flights[i].first_class_available, flights[i].first_class_sold);
        printf("  Coach Seats: %d available, %d sold\n", flights[i].coach_available, flights[i].coach_sold);
    }
}

void delete_flight(Flight flights[], int *count) {
    char flight_number[10];
    printf("Enter flight number to delete: ");
    scanf("%s", flight_number);
    for (int i = 0; i < *count; i++) {
        if (strcmp(flights[i].flight_number, flight_number) == 0) {
            for (int j = i; j < *count - 1; j++) {
                flights[j] = flights[j + 1];
            }
            (*count)--;
            printf("Flight deleted successfully.\n");
            return;
        }
    }
    printf("Flight not found.\n");
}

void update_flight(Flight flights[], int count) {
    char flight_number[10];
    printf("Enter flight number to update: ");
    scanf("%s", flight_number);
    for (int i = 0; i < count; i++) {
        if (strcmp(flights[i].flight_number, flight_number) == 0) {
            printf("Updating flight %s:\n", flight_number);
            printf("Enter new departure city: ");
            scanf("%s", flights[i].departure_city);
            printf("Enter new destination: ");
            scanf("%s", flights[i].destination);
            printf("Enter new departure date (YYYY-MM-DD): ");
            scanf("%s", flights[i].departure_date);
            printf("Enter new departure time (HH:MM): ");
            scanf("%s", flights[i].departure_time);
            printf("Enter new arrival date (YYYY-MM-DD): ");
            scanf("%s", flights[i].arrival_date);
            printf("Enter new arrival time (HH:MM): ");
            scanf("%s", flights[i].arrival_time);
            printf("Flight updated successfully.\n");
            return;
        }
    }
    printf("Flight not found.\n");
}

void make_reservation(Flight flights[], int count) {
    char flight_number[10];
    printf("Enter flight number to reserve: ");
    scanf("%s", flight_number);
    for (int i = 0; i < count; i++) {
        if (strcmp(flights[i].flight_number, flight_number) == 0) {
            printf("Reserve (1) First-class or (2) Coach? ");
            int choice;
            scanf("%d", &choice);
            if (choice == 1 && flights[i].first_class_available > 0) {
                flights[i].first_class_available--;
                flights[i].first_class_sold++;
                printf("First-class seat reserved.\n");
            } else if (choice == 2 && flights[i].coach_available > 0) {
                flights[i].coach_available--;
                flights[i].coach_sold++;
                printf("Coach seat reserved.\n");
            } else {
                printf("No seats available.\n");
            }
            return;
        }
    }
    printf("Flight not found.\n");
}

void cancel_reservation(Flight flights[], int count) {
    char flight_number[10];
    printf("Enter flight number to cancel reservation: ");
    scanf("%s", flight_number);
    for (int i = 0; i < count; i++) {
        if (strcmp(flights[i].flight_number, flight_number) == 0) {
            printf("Cancel (1) First-class or (2) Coach? ");
            int choice;
            scanf("%d", &choice);
            if (choice == 1 && flights[i].first_class_sold > 0) {
                flights[i].first_class_available++;
                flights[i].first_class_sold--;
                printf("First-class reservation canceled.\n");
            } else if (choice == 2 && flights[i].coach_sold > 0) {
                flights[i].coach_available++;
                flights[i].coach_sold--;
                printf("Coach reservation canceled.\n");
            } else {
                printf("No reservations to cancel.\n");
            }
            return;
        }
    }
    printf("Flight not found.\n");
}