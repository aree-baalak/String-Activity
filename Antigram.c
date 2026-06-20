#include <stdio.h>

int main() {
    char w1[] = "flirt";
    char w2[] = "bead";
    
    int letters[26] = {0};
    int isAntigram = 1;
    

    for (int i = 0; w1[i] != '\0'; i++) {
        char ch = w1[i];
        if (ch >= 'A' && ch <= 'Z') ch = ch + 32;
        if (ch >= 'a' && ch <= 'z') {
            letters[ch - 'a'] = 1;
        }
    }
    
    for (int i = 0; w2[i] != '\0'; i++) {
        char ch = w2[i];
        if (ch >= 'A' && ch <= 'Z') ch = ch + 32;
        if (ch >= 'a' && ch <= 'z') {
            if (letters[ch - 'a'] == 1) { 
                isAntigram = 0;
                break;
            }
        }
    }
    
    if (isAntigram == 1) printf("Antigram (1)\n");
    else printf("Not Antigram (0)\n");
    
    return 0;
}