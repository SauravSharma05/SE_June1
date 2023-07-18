#include <stdio.h>

void rs() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        rs();
        printf("%c", c);
    }
}
int main() {
    printf("Enter word: ");
    rs();
}

