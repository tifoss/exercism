#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include "isogram.h"

bool is_isogram(const char phrase[]) {
    char seen['z' - 'a' + 1] = {0};
    int i = 0, idx;

    if (phrase == NULL) {
        return false;
    }

    while (phrase[i] != '\0') {
        if (isalpha(phrase[i])) {
            idx = tolower(phrase[i]) - 'a';
            if (seen[idx] != 0) {
                return false; 
            }
            seen[idx] = 1;
        }

        i++;
    }

    return true;
}