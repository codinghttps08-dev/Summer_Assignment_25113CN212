#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to find the longest word in a sentence
void findLongestWord(const char *sentence, char *longestWord) {
    int maxLen = 0, currentLen = 0;
    char currentWord[100] = "";
    
    for (int i = 0; ; i++) {
        char ch = sentence[i];
        
        // Check if character is part of a word (letters only)
        if (isalpha((unsigned char)ch)) {
            currentWord[currentLen++] = ch;
        } else {
            // End of a word
            if (currentLen > 0) {
                currentWord[currentLen] = '\0'; // Null-terminate
                
                if (currentLen > maxLen) {
                    maxLen = currentLen;
                    strcpy(longestWord, currentWord);
                }
                currentLen = 0; // Reset for next word
            }
        }
        
        // Break at end of string
        if (ch == '\0') break;
    }
}

int main() {
    char sentence[500];
    char longestWord[100] = "";

    printf("Enter a sentence: ");
    if (!fgets(sentence, sizeof(sentence), stdin)) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline if present
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    // Handle empty input
    if (strlen(sentence) == 0) {
        printf("No input provided.\n");
        return 0;
    }

    findLongestWord(sentence, longestWord);

    if (strlen(longestWord) > 0) {
        printf("Longest word: %s\n", longestWord);
        printf("Length: %zu\n", strlen(longestWord));
    } else {
        printf("No valid words found.\n");
    }

    return 0;
}
