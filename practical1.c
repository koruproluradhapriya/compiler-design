#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        if (isalpha(str[i]))
            printf("%c is an Identifier\n", str[i]);
        else if (isdigit(str[i]))
            printf("%c is a Digit\n", str[i]);
        else
            printf("%c is a Symbol\n", str[i]);
        i++;
    }
    return 0;
}
