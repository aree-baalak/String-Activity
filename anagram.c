#include <stdio.h>

int main() {
    char str1[] = "listen";
    char str2[] = "silent";
    
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;
    
    if (len1 != len2) {
        printf("Not Anagram (0)\n");
        return 0;
    }
    
    int count[256] = {0}; 
    
    
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(int)str1[i]]++;
        count[(int)str2[i]]--;
    }
    
    int isAnagram = 1;
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }
    
    if (isAnagram == 1) printf("Anagram (1)\n");
    else printf("Not Anagram (0)\n");
    
    return 0;
}