#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int main () {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > y) {
        int tmp;
        tmp = x - y;
        y = x;
        x = tmp;
    }
    printf("x:%d y:%d\n", x, y);
    assert(x <= y);
}

