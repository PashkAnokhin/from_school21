/* Модуль отрисовки графика в терминале */

#include "print_module.h"

#include <math.h>
#include <stdio.h>

#include "../dynamic/dynamic.h"

void clear_space(int space[HEIGHT][WIDTH]) {
    for (int j = 0; j < HEIGHT; j++)
        for (int i = 0; i < WIDTH; i++) space[j][i] = 0;
}

void print_graph(int space[HEIGHT][WIDTH]) {
    for (int j = 0; j < HEIGHT; j++) {
        if (j != 0) printf("\n");
        for (int i = 0; i < WIDTH; i++) switch (space[j][i]) {
                case 0:
                    printf(".");
                    break;
                case 1:
                    printf("*");
                    break;
            }
    }
}
