#include "dynamic.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void output_dots();

int main() {
    struct dot dots[WIDTH];
    struct graph* graph = init_dot(dots);
    fill_graph(graph, dots);
    output_dots(graph);
    destroy(graph);
}

void output_dots(struct graph* head) {
    struct graph* current = head;
    int i = 0;
    while (current != NULL) {
        printf("dot %d (%lf, %lf)\t", i, (current->dot->x), (current->dot->y));
        printf("{%.0lf, %.0lf} \n", round((current->dot->x) / ((4 * M_PI) / (WIDTH - 1))),
               13 + round((current->dot->y) / (2 * 1.0 / (HEIGHT - 1))));

        current = current->next;
        i++;
    }
}
