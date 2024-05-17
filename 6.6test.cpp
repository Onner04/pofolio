#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_LENGTH 255

void correctSpelling(char* str) {
    bool isSentenceStart = true;

    int i = 0;
    while (str[i] != '\n' && str[i] != '\0') {
        if (isalpha(str[i])) {
            if (isSentenceStart) {
                str[i] = toupper(str[i]);
                isSentenceStart = false;
            }
            else {
                str[i] = tolower(str[i]);
            }
        }
        else if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            isSentenceStart = true;
        }

        i++;
    }
}

int main() {
    char str[MAX_LENGTH];
    fgets(str, MAX_LENGTH, stdin);

    correctSpelling(str);

    printf("%s\n", str);

    return 0;
}

