#include <stdio.h>
#include <string.h>

struct player {
    char name[50];
    int goal,assist,keypass,drible;
    char assistTo[50];
};

int findPlayer(struct player arr[], int n, const char *name) {
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].name, name) == 0) {
            return i;
        }
    }
    return -1; // Not found
}

void table(struct player arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s | Goals: %d | Assists: %d | Assist To: %s\n", arr[i].name, arr[i].goal, arr[i].assist, arr[i].assistTo);
    }
}

void motm(struct player arr[], int n) {
    int motm_i = 0;
    double max = 0;
    for (int i = 0; i < n; i++) {
        double score = (3 * arr[i].goal) + (2 * arr[i].assist) + arr[i].keypass + (arr[i].drible * 0.2);
        if (score > max) {
            max = score;
            motm_i = i;
        }
    }
    printf("Man of the Match: %s\n", arr[motm_i].name);
}

int main() {
    int n;
    scanf("%d", &n);
    struct player arr[n];

    // input player
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i].name);
        arr[i].goal = 0;
        arr[i].assist = 0;
        arr[i].keypass = 0;
        arr[i].drible = 0;
        strcpy(arr[i].assistTo, "");
    }

    // input goal and assist
    for (int i = 0; i < n; i++) {
        char name_1[50], name_2[50];
        int point_goal;
        scanf("%s %s %d", name_1, name_2, &point_goal);

        int i_name_1 = findPlayer(arr, n, name_1);
        int i_name_2 = findPlayer(arr, n, name_2);
        
        if(i_name_1 != -1 && i_name_2 != -1) {
            arr[i_name_1].assist += point_goal;
            strcpy(arr[i_name_1].assistTo, name_2);
            arr[i_name_2].goal += point_goal;
        }
    }

    // input keypass and drible
    for (int i = 0; i < n; i++) {
        char name[50];
        int keypass, drible;
        scanf("%s %d %d", name, &keypass, &drible);

        int i_name = findPlayer(arr, n, name);
        if (i_name != -1) {
            arr[i_name].keypass += keypass;
            arr[i_name].drible += drible;
        }
    }

    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        char cmd[10];
        scanf("%s", cmd);
        if (strcmp(cmd, "TABLE") == 0) {
            table(arr, n);
        } else if (strcmp(cmd, "MOTM") == 0) {
            motm(arr, n);
        }
    }

    return 0;
}

