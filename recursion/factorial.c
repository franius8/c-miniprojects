#include <stdio.h>

int factorialize (int number);

int main () {
    int number;
    printf("Type in the number you want to factorize: ");
    scanf("%d", &number);
    printf("The factorial of %d is equal to %d.\n", number, factorialize(number));
    return 0;
}

int factorialize (int number) {
    if (number == 1) {
        return 1;
    }
    return number * factorialize(number - 1);
}