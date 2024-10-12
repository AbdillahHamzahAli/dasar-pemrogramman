#include <stdio.h>

int main() {
    int votes[5][4] = {
        {192, 48, 206, 37},
        {147, 90, 312, 21},
        {186, 12, 121, 38},
        {114, 21, 408, 39},
        {267, 13, 382, 29} 
    };

    int vote[4] = {0,0,0,0};
    int total = 0;

    printf("%-10s %-15s %-15s %-15s %-15s\n", "Precinct", "Candidate A", "Candidate B", "Candidate C", "Candidate D");
    for (int i = 0; i < 5; i++) {
        printf("%-10d %-15d %-15d %-15d %-15d\n",i + 1, votes[i][0], votes[i][1], votes[i][2], votes[i][3]);
        for(int j = 0; j < 4; j++) {
            vote[j] += votes[i][j];
        }
    }

    total = vote[0] + vote[1] + vote[2] + vote[3];

    printf("\n");
    for(int i = 0; i < 4; i++) {
        printf("Total Votes for Candidate %c: %d (%.2f%%)\n", 'A'+i, vote[i], (vote[i] * 100.0) / total);
    }

    int win = -1;
    for(int i = 0; i < 4; i++) {
        if ((vote[i] * 100.0 / total) > 50) {
            win = i;
        }
    }

    if(win != -1) {
        printf("\nCandidate %c is the winner!\n", 'A' + win);
    } else {
        int max1 = 0, max2 = 1;
        for(int i = 0; i < 4; i++) {
            if (vote[i] > vote[max1] ) {
                max2 = max1;
                max1 = i;
            } else if (vote[i] > vote[max2]) {
                max2 = i;
            }
        }
        printf("\nNo candidate received over 50%% of the votes.\n");
        printf("Runoff between Candidate %c and Candidate %c.\n", 'A' + max1, 'A' + max2);
    }

    return 0;
}
