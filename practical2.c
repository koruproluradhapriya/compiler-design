#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, vowels = 0, digits = 0, symbols = 0;

    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) digits++;
        else if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
        }
        else symbols++;
    }

    printf("Vowels: %d\nDigits: %d\nSymbols: %d\n", vowels, digits, symbols);
    return 0;
}