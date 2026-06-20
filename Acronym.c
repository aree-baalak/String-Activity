#include <stdio.h>

int main() {
    char phrase[] = "Hyper Text Markup Language";
    char acronym[20];
    int j = 0;
    
    
    if (phrase[0] != '\0' && phrase[0] != ' ') {
        char ch = phrase[0];
        if (ch >= 'a' && ch <= 'z') ch = ch - 32; 
        acronym[j++] = ch;
    }
    
    
    for (int i = 1; phrase[i] != '\0'; i++) {
        if (phrase[i - 1] == ' ' && phrase[i] != ' ') {
            char ch = phrase[i];
            if (ch >= 'a' && ch <= 'z') ch = ch - 32;
            acronym[j++] = ch;
        }
    }
    acronym[j] = '\0'; 
    
    printf("Acronym: %s\n", acronym);
    return 0;
}