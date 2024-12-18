#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct food {
    int kode;
    char name[100];
    int harga;
    int stock;
} food;

int earnings = 0;

void initMakanan(food *makanan){
    for (int i = 0; i < 100; i++){
        makanan[i].kode = -1; 
        makanan[i].name[0] = '\0';
        makanan[i].harga = 0;
        makanan[i].stock = 0;
    }
}

void addMenu(food *makanan, char name[], int kode, int harga, int stock){
    for (int i = 0; i < 100; i++){
        if (makanan[i].kode == kode){
            printf("Menu is already exists\n");
            return;
        }
    }

    for (int i = 0; i < 100; i++){
        if (makanan[i].kode == -1){
            makanan[i].kode = kode;
            strcpy(makanan[i].name, name);
            makanan[i].harga = harga;
            makanan[i].stock = stock;
            printf("Menu added\n");
            return;
        }
    }
}

void removeMenu(food *makanan, int kode){
    for (int i = 0; i < 100; i++){
        if (makanan[i].kode == kode){
            makanan[i].kode = -1;
            printf("Menu removed\n");
            return;
        }
    }
    printf("Menu does not exist\n");
}

void infoMenu(food *makanan, int kode){
    for (int i = 0; i < 100; i++){
        if (makanan[i].kode == kode) {
            printf("#%d %s\nPrice : Rp%d\nStock : %dx\n", makanan[i].kode, makanan[i].name, makanan[i].harga, makanan[i].stock);
            return;
        }
    }
    printf("Menu does not exist\n");
}

void orderMenu(food *makanan, int kode, int jumlah){
    if (jumlah == 0) {
        printf("So you want to order or what\n");
        return;
    }
    for (int i = 0; i < 100; i++){
        if (makanan[i].kode == kode) {
            if (makanan[i].stock >= jumlah){
                printf("Ordered %dx %s for Rp%d\n", jumlah, makanan[i].name, makanan[i].harga * jumlah);
                makanan[i].stock -= jumlah;
                earnings += makanan[i].harga * jumlah;
                return;
            } 
            else {
                printf("Apologize, the stock is not enough\n");
                return;
            }
        }
    }
    printf("Menu does not exist\n");
}

int main(){
    food *makanan = malloc(100 * sizeof(food));

    initMakanan(makanan);

    while (1){
        char cmd[100]; scanf("%s", cmd);

        if (strcmp(cmd, "ADD") == 0){
            char name[100];
            int kode; scanf(" %d", &kode); 
            getchar();
            scanf(" %[^\n]", name); 
            int harga; 
            int stock;
            scanf("%d %d", &harga, &stock);
            addMenu(makanan, name, kode, harga, stock);
        } 
        else if (strcmp(cmd, "REMOVE") == 0){
            int kode; scanf("%d", &kode);
            removeMenu(makanan, kode);
        } 
        else if (strcmp(cmd, "INFO") == 0){
            int kode; scanf("%d", &kode);
            infoMenu(makanan, kode);
        } 
        else if (strcmp(cmd, "ORDER") == 0){
            int kode; scanf(" %d", &kode);
            int jumlah;scanf(" %d", &jumlah);
            
            orderMenu(makanan, kode, jumlah);
        } 
        else if (strcmp(cmd, "CLOSE") == 0){
            printf("Earnings: Rp%d\nInformatics canteen is closing... thanks for the visit!\n", earnings);
            break;
        }
    }

    return 0;
}