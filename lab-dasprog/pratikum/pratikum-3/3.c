
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isStrong=true;

// MULAI NGODING DARI SINI
// YOUR CODE STARTS HERE

// #include <stdlib.h>password
bool CheckNumber(char password[]){
    for(int i = 0; i < strlen(password); i++){
        char c= password[i];
        // printf("%c\n",c);
        if(c == '1' || c == '2' || c == '3' || c == '4' || c =='5' || c == '6' || c == '7'|| c == '8'||c =='9' || c == '0' ) return true;
    }
    isStrong = false;
    return false;
}

char toUpper(char c){
    char res = (c >= 'a' && c <= 'z')? c - 32 : c;
    // printf("%c",res);
    return res;
}

bool CheckUppercase(char password[]){
    // printf("%c",password[0]);
    for(int i = 0; i < strlen(password); i++){
        char c= password[i];
        if(c == '1' || c == '2' || c == '3' || c == '4' || c =='5' || c == '6' || c == '7'|| c == '8'||c =='9' || c == '0' ){
            continue;
        }
        if(c == toUpper(c)) return true;
    }
    isStrong = false;
    return false;
}


bool CheckKey(char password[],int key){
    // printf("check key");
    int res = 0;
    for(int i = 0;i < strlen(password); i++){
        char c= password[i];
        // if(c == '1' || c == '2' || c == '3' || c == '4' || c =='5' || c == '6' || c == '7'|| c == '8'||c =='9' || c == '0' ) return true;
        switch (c)
        {
        case '1':
            res +=1;
            break;
        case '2':
            res +=2;
            break;
        case '3':
            res +=3;
            break;
        case '4':
            res +=4;
            break;
        case '5':
            res +=5;
            break;
        case '6':
            res +=6;
            break;
        case '7':
            res +=7;
            break;
        case '8':
            res +=8;
            break;
        case '9':
            res +=9;
            break;
        case '0':
            res +=0;
            break;
        default:
            break;
        }
    }
    if(res == key) return true;
    isStrong = false;
    return false;
}

// NGODING SAMPE SINI, mengedit kode di bawah adalah tindakan ilegal
// YOUR CODE ENDS HERE, editing codes below is illegal

int main(){
    char password[128];
    int key;
    scanf("%s %d",password, &key);
    if(!CheckNumber(password))printf("Password needs number\n");
    if(!CheckUppercase(password))printf("Password requires at least one uppercase letter\n");
    if(!CheckKey(password, key))printf("Digits in password not equal to key\n");
    if(isStrong)printf("Password is strong, just like you\n");
    else printf("Weak password, fix your mistakes\n");
}