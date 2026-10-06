#include "getText.h"

std::string getText(const std::string &inputText) {
    if (inputText == "") {
        return "Empty input";
    }
    return inputText;
}