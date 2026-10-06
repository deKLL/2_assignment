#include "numberOfOccurrences.h"

int numberOfOccurrences(const char text[], const char subtext[]) {
    unsigned int textLength = 0;
    while (text[textLength] != '\0') {
        textLength++;
    }
    unsigned int subtextLength = 0;
    while (subtext[subtextLength] != '\0') {
        subtextLength++;
    }
    if (subtextLength == 0 || subtextLength > textLength) {
        return 0;
    }
    int count = 0;
    unsigned int i = 0; 
    while (i <= textLength - subtextLength) { 
        if (text[i] == subtext[0]) {
            bool isMatch = true; 
            unsigned int j = 0;
            while (j < subtextLength) {
                if (text[i + j] != subtext[j]) {
                    isMatch = false; 
                    break; 
                }
                j++;
            }
            if (isMatch == true) {
                count++;
            }
        }
        i++;
    }
    return count;
}