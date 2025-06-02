#include <stdio.h>

int main() {
    int a, b;
    // BUG: forgot to use '&' to pass addresses of a and b
    scanf("%d %d", a, b);
    printf("%d\n", a + b);
    return 0;
}
