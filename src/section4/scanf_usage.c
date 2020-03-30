#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("enter a value: ");
    scanf("%s %d", str, &i);

    printf("\nyou entered: %s %d", str, i);
}
