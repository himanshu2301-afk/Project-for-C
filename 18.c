#include <stdio.h>

void namaste();
void bonjour();

int main() {
    char ch;

    printf("Enter f for french and i for indian: ");
    scanf("%c", &ch);

    if(ch == 'i') {
        namaste();
    } else if(ch == 'f') {
        bonjour();
    } else {
        printf("Invalid input\n");
    }

    return 0;
}

void namaste() {
    printf("Namaste\n");
}

void bonjour() {
    printf("Bonjour\n");
}
