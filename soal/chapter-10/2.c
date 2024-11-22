#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int id;
    int age;
    char nativeCity[50];
    char contactNumber[15];
    char departement[50];
    double grossSalary;
} employees;

int main() {
    int n;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);
    getchar(); // to consume the newline character after scanf

    employees *data = malloc(n * sizeof(employees));
    if (!data) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        printf("Masukkan nama[%d]: ", i);
        fgets(data[i].name, sizeof(data[i].name), stdin);
        data[i].name[strcspn(data[i].name, "\n")] = '\0'; // remove newline

        printf("Masukkan ID[%d]: ", i);
        scanf("%d", &data[i].id);

        printf("Masukkan umur[%d]: ", i);
        scanf("%d", &data[i].age);
        getchar(); // consume newline

        printf("Masukkan kota asal[%d]: ", i);
        fgets(data[i].nativeCity, sizeof(data[i].nativeCity), stdin);
        data[i].nativeCity[strcspn(data[i].nativeCity, "\n")] = '\0'; // remove newline

        printf("Masukkan no kontak[%d]: ", i);
        fgets(data[i].contactNumber, sizeof(data[i].contactNumber), stdin);
        data[i].contactNumber[strcspn(data[i].contactNumber, "\n")] = '\0'; // remove newline

        printf("Masukkan departemen[%d]: ", i);
        fgets(data[i].departement, sizeof(data[i].departement), stdin);
        data[i].departement[strcspn(data[i].departement, "\n")] = '\0'; // remove newline

        printf("Masukkan gaji bruto[%d]: ", i);
        scanf("%lf", &data[i].grossSalary);
        getchar(); // consume newline
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(data[i].nativeCity, data[j].nativeCity) > 0) {
                employees temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    printf("\nData karyawan setelah diurutkan berdasarkan kota asal:\n");
    for (int i = 0; i < n; i++) {
        printf("Nama: %s, ID: %d, Umur: %d, Kota Asal: %s, No Kontak: %s, Departemen: %s, Gaji Bruto: %.2lf\n",
               data[i].name, data[i].id, data[i].age, data[i].nativeCity, data[i].contactNumber, data[i].departement, data[i].grossSalary);
    }

    free(data);
    return 0;
}

