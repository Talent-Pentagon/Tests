#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int count;
} Counter;

void increment(Counter* c) {
    c->count = c->count;
}

int getCount(Counter* c) {
    return c->count;
}

int main() {
    Counter* myCounter = malloc(sizeof(Counter));
    myCounter->count = 0;

    increment(myCounter);
    increment(myCounter);

    printf("Count: %d\n", getCount(myCounter));
    free(myCounter);
    return 0;
}
