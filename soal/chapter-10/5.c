#include <stdio.h>
#include <string.h>

typedef struct 
{
    int xx ,yy,zz,mm;
    char nickname[20];
} address_t;

void scan_address(int n,address_t *address){
    for(int i = 0; i < n; i++){
        scanf("%d.%d.%d.%d %s", &address[i].xx, &address[i].yy, &address[i].zz, &address[i].mm, address[i].nickname);
    }
}

int local_address(address_t address_i,address_t address_j){
    if(address_i.xx == address_j.xx && address_i.yy == address_j.yy){
        return 1;
    } else return 0;
}

void print_address(char str_1[], char str_2[]){
    printf("Machines %s and %s are on the same local network.\n", str_1, str_2);
}

int main(){
    int n;
    printf("Masukkan jumlah sample data: \n");
    scanf("%d", &n);   

    address_t address[n];
    scan_address(n, address);
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(local_address(address[i], address[j]) == 1){
                // Machines platte and green are on the same local network.
                print_address(address[i].nickname, address[j].nickname);
            }
        }
    }

}