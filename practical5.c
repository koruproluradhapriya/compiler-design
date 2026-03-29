#include <stdio.h>
#include <string.h>

char str[20];
int i = 0;

void S() {
    if (str[i] == 'a') {
        i++;
        if (str[i] == 'b') {
            i++;
            if (str[i] == 'c')
                i++;
        }
    }
}

int main() {
    printf("Enter string: ");
    scanf("%s", str);

    S();

    if (str[i] == '\0')
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}