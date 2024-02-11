#ifndef WID_HEI_H

#define WIDTH 80
#define HEIGHT 25

#endif

#ifndef DYNAMIC_H
#define DYNAMIC_H

struct dot {
    double x;
    double y;
};

struct graph {
    struct dot* dot;
    struct graph* next;
};

struct graph* init_dot(struct dot* dot);
struct graph* add_dot(struct graph* elem, struct dot* dot);
void destroy(struct graph* root);
void fill_space(int space[HEIGHT][WIDTH], struct graph* head);
void fill_graph(struct graph* head, struct dot* dots);
double func(double x);

#endif
