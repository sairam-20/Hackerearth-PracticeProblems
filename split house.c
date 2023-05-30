#include <stdio.h>
#include <string.h>

void divide_village(char line[]) {
    int length = strlen(line);
    char divided_line[length + 1];
    strcpy(divided_line, line);

    int fence_count = 0;

    for (int i = 1; i < length - 1; i++) {
        if (line[i] != '.' && line[i] == line[i - 1] && line[i] == line[i + 1]) {
            printf("NO\n");
            return;
        }
    }

    for (int i = 0; i < length; i++) {
        if (line[i] == '.' && (i == 0 || i == length - 1 || line[i - 1] != line[i + 1])) {
            divided_line[i] = 'B';
            fence_count++;
        }
    }

    printf("YES\n");
    printf("%s\n", divided_line);
}

int main() {
    int line_length;
    scanf("%d\n", &line_length);

    char line[line_length + 1];
    scanf("%s", line);

    divide_village(line);

    return 0;
}
