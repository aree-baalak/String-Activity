#include <stdio.h>

int main() {
    char str[] = "The quick brown fox jumps over the lazy dog";
    int visited[26] = {0}; 
    int uniqueLetters = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
    
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        
    
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a'; 
            if (visited[index] == 0) {
                visited[index] = 1;
                uniqueLetters++;
            }
        }
    }
    
    if (uniqueLetters == 26) printf("Pangram (1)\n");
    else printf("Not Pangram (0)\n");
    
    return 0;
}