#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int count = 0, i;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) {
        if ((i == 0 && sentence[i] != ' ') ||
            (sentence[i] != ' ' && sentence[i - 1] == ' ')) {
            count++;
        }
    }

    printf("Number of words: %d\n", count);

    return 0;
}