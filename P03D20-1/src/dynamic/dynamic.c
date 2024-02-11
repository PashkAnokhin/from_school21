/* Модуль библиотек для организации динамических структур данных */

#include "dynamic.h"

#include <math.h>
#include <stdlib.h>

#include "../print_module/print_module.h"

struct graph* init_dot(struct dot* dot) {
    struct graph* head = (struct graph*)malloc(sizeof(struct graph));
    head->dot = dot;
    head->next = NULL;
    head->dot->x = 0 + START_X;
    head->dot->y = 0 + START_Y;
    return head;
}

struct graph* add_dot(struct graph* elem, struct dot* dot) {
    struct graph* next_dot = (struct graph*)malloc(sizeof(struct graph));
    next_dot->dot = dot;
    next_dot->next = elem->next;
    elem->next = next_dot;
    return next_dot;
}

void destroy(struct graph* root) {
    struct graph* current = root;
    while (current != NULL) {
        struct graph* next = current->next;
        free(current);
        current = next;
    }
}

void fill_graph(struct graph* head, struct dot* dots) {
    struct graph* current = head;
    int i = -1;
    while (i < WIDTH - 1) {
        i++;
        current = add_dot(current, (dots + i));
        current->dot->x = i * (OX);
        current->dot->y = func(current->dot->x);  // !!! заменить на функцию расчета польской нотации
    }
}

void fill_space(int space[HEIGHT][WIDTH], struct graph* head) {
    struct graph* current = head;
    while (current != NULL) {
        int i = round((current->dot->x) / (OX));
        int j = START_Y - 1 + round((current->dot->y) / (OY));
        if (i >= 0 && i < WIDTH && j >= 0 && j < HEIGHT) space[j][i] = 1;
        current = current->next;
    }
}

/* заменить на функцию расчета польской нотации */

double func(double x) { return sin(cos(2 * x)); }
