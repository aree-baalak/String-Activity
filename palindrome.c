#include <stdio.h>

int main() {
    char str[] = "radar";
    int len = 0;
    
    
    while (str[len] != '\0') {
        len++;
    }
    
    
    int left = 0;
    int right = len - 1;
    int isPalindrome = 1; 
    
    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0; // Break ho gaya
            break;
        }
        left++;
        right--;
    }
    
    if (isPalindrome == 1) printf("Palindrome (1)\n");
    else printf("Not Palindrome (0)\n");
    
    return 0;
}