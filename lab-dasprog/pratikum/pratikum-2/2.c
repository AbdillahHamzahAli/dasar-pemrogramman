#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    char cmd[10],strA[1001], starB[1001];
    
    for(int i = 0; i < n; i++){
        scanf("%s %s %s", cmd,strA,starB);
        int c=1;
        if(strcmp(cmd, "ANAGRAM") == 0){
            // [a-z]
            // [0,0,0,0,0]
            int arr[27] = {0};
            for(int j = 0; j < strlen(strA); j++){
                arr[strA[j] - 'a']++;
                arr[starB[j] - 'a']--;
            }
            for(int j = 0; j < 26; j++){
                if(arr[j]!= 0){
                    printf("This cannot lah bro\n");
                    c=0; 
                    break;
                }
            }
            if(c) printf("Hhm %s can be arranged into %s\n",strA, starB);
        } else if(strcmp(cmd, "FLIP") == 0){
            int len = strlen(strA);
            for(int i = 0; i < len; i++){
                if(strA[i] != starB[len-i-1]){
                    printf("This cannot lah bro\n");
                    c=0; 
                    break;
                } 
            }
            if(c) printf("Flip %s to get %s\n",strA, starB);
        }
    }
        
}