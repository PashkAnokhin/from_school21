/*Размер поля для вывода графиков - прямоугольник 25 на 80 точек.
Область определения - [0; 4 Пи]
Область значений - [-1; 1]
Ориентация координатной плоскости - ось ординат направлена вниз, ось абсцисс - направо.
Центр координат - середина левой границы (точка {0, 13}).
Рисовать оси не нужно.
Ничего кроме графика выводиться не должно.
Значения округляются по правилам математики.*/

#ifndef WID_HEI_H

#define WIDTH 80
#define HEIGHT 25

#endif

#ifndef PRINT_MODULE_H
#define PRINT_MODULE_H

#define START_X 0
#define START_Y 13

#define OY (2 * 1.0 / (HEIGHT - 1))  // 1 элемент по вертикали ~ 0.08 координатной оси OY
#define OX (4 * M_PI) / (WIDTH - 1)  // 1 элемент по горизонтали ~ 0.157 координатной оси OX

void print_graph(int space[HEIGHT][WIDTH]);
void clear_space(int space[HEIGHT][WIDTH]);

#endif
