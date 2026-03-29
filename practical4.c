#include <stdio.h>
#include <string.h>

char input[20];
int i = 0;

void E();
void T();
void F();

void E() {
    T();
    if (input[i] == '+') {
        i++;
        E();
    }
}

void T() {
    F();
    if (input[i] == '*') {
        i++;
        T();
    }
}

void F() {
    if (input[i] == 'a')
        i++;
}

int main() {
    printf("Enter string: ");
    scanf("%s", input);

    E();

    if (input[i] == '\0')
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}