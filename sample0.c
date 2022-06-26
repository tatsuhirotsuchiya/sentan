#include <stdio.h>
#include <assert.h>

int main (void) {
    int x, y, b;
    scanf("%d %d %d", &x, &y, &b);

//    __CPROVER_assume((x + y > 2));

    if (x + y > 2) {
        if (b) 
            x = x +1;
        else
            x = x + 2;
        y = y + x;
        x = y + 1;
        assert(x > 5);
    }
}

