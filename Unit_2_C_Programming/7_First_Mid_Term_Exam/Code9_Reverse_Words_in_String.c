#include <stdio.h>
#include <string.h>

// Function to reverse a portion of the string
void reverse(char* str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to reverse words in a string
void reverseWords(char* str) {
    int length = strlen(str);
    
    // Step 1: Reverse the entire string
    reverse(str, 0, length - 1);
    
    // Step 2: Reverse each word individually
    int start = 0;
    for (int i = 0; i <= length; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }
}

int main() {
    char str[] = "mohamed gamal";
    
    printf("Input: %s\n", str);
    
    reverseWords(str);
    
    printf("Output: %s\n", str);
    
    return 0;
}