#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    printf("Digite uma string: ");
    scanf("%s", str);

    length = strlen(str);

    printf("O comprimento da string e: %d\n", length);

    return 0;
}