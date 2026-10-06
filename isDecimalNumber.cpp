#include "isDecimalNumber.h"

bool isDecimalNumber(const char number[]) {
    if (number[0] == '\0') {
        return false;
    }
    bool hasDot = false;
    bool hasLeftNumbers = false;
    bool hasRightNumbers = false;
    int i = 0;
    if (number[i] == '-') {
        i++;
    }
    while (number[i] != '\0') {
        if (number[i] >= '0' && number[i] <= '9') {
            if (hasDot == false) {
                hasLeftNumbers = true;
            } else {
                hasRightNumbers = true;
            }
        } 
        else if (number[i] == '.' || number[i] == ',') {
            if (hasDot == true || hasLeftNumbers == false) {
                return false; 
            }
            hasDot = true;
        } 
        else {
            return false; 
        }
        i++;
    }
    if (hasDot == true && hasLeftNumbers == true && hasRightNumbers == true) {
        return true;
    }
    return false;
}