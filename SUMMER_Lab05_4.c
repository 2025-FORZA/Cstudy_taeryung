#include <stdio.h>

char combine(char a, char b) {
    if (a == 'A' && b == 'A') return 'A';
    if (a == 'A' && b == 'G') return 'C';
    if (a == 'A' && b == 'C') return 'A';
    if (a == 'A' && b == 'T') return 'G';

    if (a == 'G' && b == 'A') return 'C';
    if (a == 'G' && b == 'G') return 'G';
    if (a == 'G' && b == 'C') return 'T';
    if (a == 'G' && b == 'T') return 'A';

    if (a == 'C' && b == 'A') return 'A';
    if (a == 'C' && b == 'G') return 'T';
    if (a == 'C' && b == 'C') return 'C';
    if (a == 'C' && b == 'T') return 'G';

    if (a == 'T' && b == 'A') return 'G';
    if (a == 'T' && b == 'G') return 'A';
    if (a == 'T' && b == 'C') return 'G';
    if (a == 'T' && b == 'T') return 'T';
}

int main(void) {
    int number;
    char array[1000001];

    scanf("%d", &number);
    scanf("%s", array);

    char new_array = array[number - 1];

    for (int i = number - 2; i >= 0; i--) {
        new_array = combine(array[i], new_array);
    }

    printf("%c\n", new_array);
    return 0;
}
