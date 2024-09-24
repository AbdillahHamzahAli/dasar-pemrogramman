#include <stdio.h>
#include <stdlib.h>  // Untuk llabs()

int main() {
    unsigned long long N, M;
    // n baris m kolom
    unsigned long long RC, CC, RZ, CZ;
    
    scanf("%llu %llu", &N, &M);
    scanf("%llu %llu %llu %llu", &RC, &CC, &RZ, &CZ);
    
    unsigned long long jarak = llabs(RC - RZ) + llabs(CC - CZ); // BERAPA GERAK C KE Z
    // Zhongli max 4 pilar min 2

    if(M == 2 || N == 2){
        if(jarak < 4){
            if(RC == RZ || CC == CZ){
                if (jarak == 1){
                    printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam 1 detik.\"\n");
                } else {
                    printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 2 kali.\"");
                }
            } else{
                printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam %llu detik.\"\n", jarak);
            }
        } else {
            printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 2 kali.\"");
        }
    }
    else if(M == 3 || N == 3){
        // CEK POJOK
        if((RZ == 1 && CZ == 1) || (RZ == N && CZ == M) || (RZ == 1 && CZ == M) || (RZ == N && CZ == 1)){
            // DIAGONAL
            if(RC == RZ || CC == CZ){
                if(jarak == 1){
                    printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam 1 detik.\"\n");
                } else {
                    printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 2 kali.\"");
                }
            } else{
                if(jarak > 3){
                    printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 2 kali.\"");
                } else {
                    printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam %llu detik.\"\n", jarak);
                }
            }
        } else {
            if(jarak > 3){
                printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 3 kali.\"");
            } else {
                // CHECK DIAGONAL
                if(RC == RZ || CC == CZ){
                    if(jarak == 1){
                        printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam 1 detik.\"\n");
                    } else {
                        printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 3 kali.\"");
                    }
                } else {
                    printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam %llu detik.\"\n", jarak);
                }
            }
        }
    } else {
        // pojok -> z 2
        if((RZ == 1 && CZ == 1) || (RZ == N && CZ == M) || (RZ == 1 && CZ == M) || (RZ == N && CZ == 1)){
            // DIAGONAL
            if(RC == RZ || CC == CZ){
                if(jarak == 1){
                    printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam 1 detik.\"\n");
                } else {
                    printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 2 kali.\"");
                }
            } else{
                if(jarak > 3){
                    printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 2 kali.\"");
                } else {
                    printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam %llu detik.\"\n", jarak);
                }
            }
        }
        // samping -> 3
        else if(RZ == 1 || RZ == N || CZ == 1 || CZ == M){
            // cek diagonal
            if(RC == RZ || CC == CZ){
                if(jarak == 1){
                    printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam 1 detik.\"\n");
                } else {
                    printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 3 kali.\"");
                }
            } else{
                if(jarak > 3){
                    printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 3 kali.\"");
                } else {
                    printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam %llu detik.\"\n", jarak);
                }
            }
        }
        // tengah -> 4
        else {
            // cek diagonal
            if(RC == RZ || CC == CZ){
                if(jarak == 1){
                    printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam 1 detik.\"\n");
                } else {
                    printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 4 kali.\"");
                }
            } else{
                if(jarak > 3){
                    printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis 4 kali.\"");
                } else {
                    printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam %llu detik.\"\n", jarak);
                }
            }
        }
    }
    return 0;
}