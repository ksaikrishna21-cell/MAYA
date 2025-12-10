#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int a = 0, b = 1, c;

    if (N >= 1)
        printf("%d ", a);
    if (N >= 2)
        printf("%d ", b);

    for (int i = 3; i <= N; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
