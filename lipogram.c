#include <stdio.h>

int main() {
    char phrase[] = "Why did you do it"; 
    char missingLetter = 'e';
    int isLipogram = 1; 
    
    for (int i = 0; phrase[i] != '\0'; i++) {
        char current = phrase[i];
        if (current >= 'A' && current <= 'Z') current = current + 32;
        
        if (current == missingLetter) {
            isLipogram = 0; 
            break;
        }
    }
    
    if (isLipogram == 1) printf("Valid Lipogram (1)\n");
    else printf("Not Lipogram (0)\n");
    
    return 0;
}