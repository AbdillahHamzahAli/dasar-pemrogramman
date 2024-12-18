#include "controller/controller.h"

int main() {
    Flight flights[MAX_FLIGHTS];
    int count = 0;
    const char *filename = "flights.txt";

    load_flight_data_text(flights, &count, filename);

    int choice;
    do {
        printf("\nAirline Reservation System:\n");
        printf("1. Add Flight\n2. Delete Flight\n3. Update Flight\n");
        printf("4. Make Reservation\n5. Cancel Reservation\n6. Display Flights Info\n7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: add_flight(flights, &count); break;
            case 2: delete_flight(flights, &count); break;
            case 3: update_flight(flights, count); break;
            case 4: make_reservation(flights, count); break;
            case 5: cancel_reservation(flights, count); break;
            case 6: display_flights(flights, count); break;
            case 7: save_flight_data_text(flights, count, filename); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 7);

    printf("Exiting...\n");
    return 0;
}
