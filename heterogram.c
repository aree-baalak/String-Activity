#include <stdio.h>

int main() {
    char str[] = "subdermatoglyphic";
    int seen[256] = {0}; 
    int isHeterogram = 1;
    
    for (int i = 0; str[i] != '\0'; i++) {
        int asciiValue = (int)str[i];
        if (seen[asciiValue] == 1) { 
            isHeterogram = 0;
            break;
        }
        seen[asciiValue] = 1;
    }
    
    if (isHeterogram == 1) printf("Heterogram (1)\n");
    else printf("Not Heterogram (0)\n");
    
    return 0;
}