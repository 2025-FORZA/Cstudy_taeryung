#include <stdio.h>
#include <string.h>

#define MAX 201

char table[21][MAX];

int main() {
    int k;
    char cipher[MAX];
    scanf("%d", &k);
    scanf("%s", cipher);

    int len = strlen(cipher);
    int rows = len / k;
    int idx = 0;

    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < k; j++) {
                table[i][j] = cipher[idx++];
            }
        }
        else {
            for (int j = k - 1; j >= 0; j--) {
                table[i][j] = cipher[idx++];
            }
        }
    }

    for (int j = 0; j < k; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%c", table[i][j]);
        }
    }

    return 0;
}
