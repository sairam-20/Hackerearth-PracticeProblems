#include <stdio.h>
#include <string.h>

int main() {
    int count;
    char s[10];
    scanf("%s", s);

    if ((((s[0] - '0') + (s[1] - '0')) % 2 == 0) &&
        (((s[3] - '0') + (s[4] - '0')) % 2 == 0) &&
        (((s[4] - '0') + (s[5] - '0')) % 2 == 0) &&
        (((s[7] - '0') + (s[8] - '0')) % 2 == 0) &&
        (s[2] != 'A' && s[2] != 'E' && s[2] != 'I' && s[2] != 'O' && s[2] != 'U' && s[2] != 'Y')) {
        printf("valid\n");
    } else {
        printf("invalid\n");
    }

    return 0;
}
