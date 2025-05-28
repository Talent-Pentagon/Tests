#include <stdio.h>

typedef struct {
    int x;
    void (*print)(void);
} Object;

void printObject() {
    printf("x = %d\n", x);
}

int main() {
    Object obj = {5, printObject};
    obj.print();
    return 0;
}
