#include <stdio.h>

int main() {
    int rows = 4; // Number of rows

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 4; j++) {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}