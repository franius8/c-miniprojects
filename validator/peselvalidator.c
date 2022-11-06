#include <stdio.h>
#include <string.h>

int validatePesel ( char pesel[11]);

int main () {
    char pesel[11];
    scanf("%s", &pesel);
    int validity = validatePesel(pesel);
    printf("%s", validity ? "valid\n" : "not valid\n");
    return 0;
}

int validatePesel ( char pesel[11] ) {
    int length = strlen(pesel);
    int weights[10] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};
    int checkSum;
    if (length != 11) {
        return 0;
    };
    for (int i = 0; i < length; i++) {
        if (pesel[i] < 48 || pesel[i] > 57) {
            return 0;
        }
    }
    for (int i = 0; i < 11; i++) {
        checkSum += weights[i] * (pesel[i] - 48);
    }
    if (pesel[11] != checkSum % 10) {
        return 0;
    }
    return 1;
}