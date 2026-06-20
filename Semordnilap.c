#include <stdio.h>

int main() {
    char w1[] = "desserts";
    char w2[] = "stressed";
    
    int len1 = 0, len2 = 0;
    while (w1[len1] != '\0') len1++;
    while (w2[len2] != '\0') len2++;
    
    if (len1 != len2) {
        printf("Not Semordnilap (0)\n");
        return 0;
    }
    
    int isSemordnilap = 1;
    for (int i = 0; i < len1; i++) {
        
        if (w1[i] != w2[len1 - 1 - i]) {
            isSemordnilap = 0;
            break;
        }
    }
    
    if (isSemordnilap == 1) printf("Semordnilap Pair (1)\n");
    else printf("Not Semordnilap (0)\n");
    
    return 0;
}