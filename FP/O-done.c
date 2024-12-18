#include <stdio.h>
#include <string.h>

struct data
{
    char otoritas[11];
    char aksi[11];
};

int main(){
    int n; scanf("%d", &n);
    struct data arr[n];
    char high[11] = "";
    char prev[11] = "";
    char last[11] = "";

    for(int i = 0; i < n; i++){
        scanf("%s %s", arr[i].otoritas, arr[i].aksi);
    }   

    if(strcmp(arr[0].aksi,"istirahat") == 0){
        printf("Oceanid Minion marah karena belum diperintah apa-apa, tetapi sudah disuruh istirahat!");
        return 0;
    }

    for(int i = 0; i < n; i++){
        if(strcmp(arr[i].otoritas, "furina") == 0){
            if(strcmp(arr[i].aksi, "beraksi") == 0){
                if(strcmp(prev, "beraksi") == 0){
                    printf("Oceanid Minion sudah diperintah beraksi oleh %s.\n", last);
                    strcpy(high, arr[i].otoritas);
                } else {                                                    
                    printf("Oceanid Minion beraksi sesuai keinginan %s.\n", arr[i].otoritas);
                    strcpy(high, arr[i].otoritas);
                    strcpy(last, arr[i].otoritas);
                    strcpy(prev, arr[i].aksi);
                }
            } else if(strcmp(arr[i].aksi, "istirahat") == 0){
                if(strcmp(prev, "istirahat") == 0){
                    printf("Oceanid Minion sudah diperintah istirahat oleh %s.\n", last);
                    strcpy(high, arr[i].otoritas);
                } else {                                                    
                    printf("Oceanid Minion istirahat sesuai keinginan %s.\n", arr[i].otoritas);
                    strcpy(high, arr[i].otoritas);
                    strcpy(last, arr[i].otoritas);
                    strcpy(prev, arr[i].aksi);
                }
            }
        } else if(strcmp(arr[i].otoritas, "hutao") == 0){
            if(strcmp(high, "furina") != 0){
                if(strcmp(arr[i].aksi, "beraksi") == 0){
                    if(strcmp(prev, "beraksi") == 0){
                        printf("Oceanid Minion sudah diperintah beraksi oleh %s.\n", last);
                        strcpy(high, arr[i].otoritas);
                    } else {                                                    
                        printf("Oceanid Minion beraksi sesuai keinginan %s.\n", arr[i].otoritas);
                        strcpy(high, arr[i].otoritas);
                        strcpy(last, arr[i].otoritas);
                        strcpy(prev, arr[i].aksi);
                    }
                } else if(strcmp(arr[i].aksi, "istirahat") == 0){
                    if(strcmp(prev, "istirahat") == 0){
                        printf("Oceanid Minion sudah diperintah istirahat oleh %s.\n", last);
                        strcpy(high, arr[i].otoritas);
                    } else {                                                    
                        printf("Oceanid Minion istirahat sesuai keinginan %s.\n", arr[i].otoritas);
                        strcpy(high, arr[i].otoritas);
                        strcpy(last, arr[i].otoritas);
                        strcpy(prev, arr[i].aksi);
                    }
                }
            } else {
                printf("Oceanid Minion tidak nurut karena wewenang %s lebih rendah dari %s.\n", arr[i].otoritas, high);
            }
        } else if(strcmp(arr[i].otoritas, "lyney") == 0){
            if(strcmp(high, "furina") != 0 && strcmp(high, "hutao") != 0){
                if(strcmp(arr[i].aksi, "beraksi") == 0){
                    if(strcmp(prev, "beraksi") == 0){
                        printf("Oceanid Minion sudah diperintah beraksi oleh %s.\n", last);
                    } else {                                                    
                        printf("Oceanid Minion beraksi sesuai keinginan %s.\n", arr[i].otoritas);
                        strcpy(high, arr[i].otoritas);
                        strcpy(last, arr[i].otoritas);
                        strcpy(prev, arr[i].aksi);
                    }
                } else if(strcmp(arr[i].aksi, "istirahat") == 0){
                   if(strcmp(prev, "istirahat") == 0){
                        printf("Oceanid Minion sudah diperintah istirahat oleh %s.\n", last);
                    } else {                                                    
                        printf("Oceanid Minion istirahat sesuai keinginan %s.\n", arr[i].otoritas);
                        strcpy(high, arr[i].otoritas);
                        strcpy(last, arr[i].otoritas);
                        strcpy(prev, arr[i].aksi);
                    }
                }
            } else {
                printf("Oceanid Minion tidak nurut karena wewenang %s lebih rendah dari %s.\n", arr[i].otoritas, high);
            }
        }
    }

    return 0;
}