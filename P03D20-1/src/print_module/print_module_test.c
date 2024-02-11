#include "print_module.h"

#include <stdio.h>

#include "../dynamic/dynamic.h"

int main() {
    int space[HEIGHT][WIDTH];
    struct dot dots[WIDTH];
    struct graph* graph = init_dot(dots);
    clear_space(space);
    fill_graph(graph, dots);
    fill_space(space, graph);
    print_graph(space);
    destroy(graph);
}
