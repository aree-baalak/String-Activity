#include <stdio.h>

int main() {
    char str[] = "machine";
    int seen[26] = {0};
    int isIsogram = 1;
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') ch = ch + 32;
        
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            if (seen[index] == 1) { 
                isIsogram = 0;
                break;
            }
            seen[index] = 1;
        }
    }
    
    if (isIsogram == 1) printf("Isogram (1)\n");
    else printf("Not Isogram (0)\n");
    
    return 0;
}
    
   