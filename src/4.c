#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 5;
    int y = 10;
    int z = add(x, y);
    printf("%d", z);
    return 0;
}

int add(int x, int y) {
    return x + y;
}
