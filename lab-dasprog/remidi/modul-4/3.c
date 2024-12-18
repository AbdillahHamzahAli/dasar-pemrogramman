#include <stdio.h>
#include <string.h>

struct Player
{
    char username[50];
    char ip[20];
    char uuid[100];
};

int auth(struct Player s_data_player[],char login_player[],int i){
    for(int j = 0; j < i; j++){
        if(strcmp(s_data_player[j].username, login_player) == 0){
            return j;
        }
    }
    return -1;
}

int main(){
    int i,j;
    scanf("%d", &i);
    
    struct Player s_data_player[i];
    for(int k = 0; k < i; k++){
        scanf("%s %s %s", s_data_player[k].username, s_data_player[k].ip, s_data_player[k].uuid);
    }

    scanf("%d",&j);
    char login_player[j][100];

    for (int l = 0; l < j; l++){
        scanf("%s", login_player[l]);
        int find = auth(s_data_player, login_player[l], i);
        if(find != -1){
            // asyik d8ef41e0-9504-45fd-b37b-aec087f3ec03-Prinandika diperbolehkan bermain
            printf("asyik %s-%s diperbolehkan bermain\n", s_data_player[find].uuid, s_data_player[find].username);
        } else {
            printf("hmm, kayaknya ada yang salah dengan datamu\n");
        }
    
    }

    return 0;
}