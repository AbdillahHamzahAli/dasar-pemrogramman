#include <stdio.h>
#include <string.h>


struct Farm
{
    char farmName[100];
    int farmRate;
};

struct Island
{
    char islandName[100];
    int islandX;
    int islandZ;
    int avaliableFarm;
    int i_farmNow;
    struct Farm farmInIsland[5];   
};

int findIsland(struct Island myIsland[],char islandName[], int maxIslandNow){
    for(int i=0;i < maxIslandNow;i++){
        if(strcmp(myIsland[i].islandName,islandName) == 0){
            return i;
        }
    }
    return -1;
}

void printIsland(struct Island myIsland){
    // ISLAND PulauGading has 2 farms:
    printf("ISLAND %s has %d farms:\n", myIsland.islandName, myIsland.i_farmNow);
    if(myIsland.avaliableFarm !=5){
        for(int i = 0;i < myIsland.i_farmNow;i++){
            printf("FARM %s %d\n",myIsland.farmInIsland[i].farmName,myIsland.farmInIsland[i].farmRate);
        }
    }
}

int main(){
    int maxIsland = 50,i_island = 0;

    struct Island myIsland[50];
    for(int i=0;i<50;i++){
        myIsland[i].i_farmNow = 0;
        myIsland[i].avaliableFarm = 5;
    }

    while(2){
        char cmd[16]; scanf("%s",cmd);
        // printf("cmd = %s\n",cmd);
        if(strcmp(cmd,"ADD_ISLAND") == 0){
            scanf("%s", myIsland[i_island].islandName);
            scanf("%d", myIsland[i_island].islandX);
            scanf("%d", myIsland[i_island].islandZ);
            if(i_island < maxIsland){
                maxIsland--;
                i_island++;
                printf("ISLAND ADDED\n");
                continue;
            } else{
                printf("CANNOT ADD MORE ISLAND\n");
            }
        } else if(strcmp(cmd,"ADD_FARM") == 0) {
            char farmName[50], islandName[50];
            int farmRate = 0;
            scanf("%s %s %d", farmName, islandName, &farmRate);
            int find = findIsland(myIsland, islandName, i_island);
            if(find != -1){
                if(myIsland[find].avaliableFarm > 0){
                    myIsland[find].farmInIsland[myIsland[find].i_farmNow].farmRate = farmRate;
                    strcpy(myIsland[find].farmInIsland[myIsland[find].i_farmNow].farmName, farmName);
                    myIsland[find].avaliableFarm--;
                    myIsland[find].i_farmNow++;
                    printf("FARM ADDED\n");
                    continue;
                } else{
                    printf("ISLAND FULL CANNOT ADD FARM\n");
                }
            } else{
                printf("ISLAND NOT FOUND CANNOT ADD FARM\n");
            }
        } else if(strcmp(cmd,"VIEW_ALL") == 0){
            for (int i = 0; i < i_island; i++){
                printIsland(myIsland[i]);
            }
            continue;
        } else {
            printf("INVALID COMMAND, BYE!");
            return 0;
        }
    }

    return 0;
}
