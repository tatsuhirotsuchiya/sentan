#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

#define SIZE 3

int main(void) {
    int entry[SIZE][SIZE];
    bool allValues = true;

    for (int i = 1; i <= SIZE*SIZE; i++) {
        bool doesAppear = false; 
        for (int x  = 0; x < SIZE; x++) {
            for (int y = 0; y < SIZE; y++) {
                if (entry[x][y] == i) {
                    doesAppear = true;
                    break;
                }
            }
        }
        if (!doesAppear) {
            allValues = false;
            break;
        }
    }

    int true_sum = 0;
    for (int y = 0; y < SIZE; y++) {
        true_sum += entry[0][y];
    }

    bool validColumns = true;
    for (int x = 0; x < SIZE; x++) {
        int sum = 0;
        for (int y = 0; y < SIZE; y++) {
            sum += entry[x][y];
        }
        if (sum != true_sum) {
            validColumns = false;
            break;
        }
    }

    bool validRows = true;
    for (int y = 0; y < SIZE; y++) {
        int sum = 0;
        for (int x = 0; x < SIZE; x++) {
            sum += entry[x][y];
        }
        if (sum != true_sum) {
            validRows = false;
            break;
        }
    }

    assert(!(allValues && validColumns && validRows));

}