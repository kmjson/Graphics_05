#ifndef DRAW_H
#define DRAW_H

#include "matrix.h"
#include "ml6.h"

//advanced shapes
//3d shapes
void add_box( struct matrix * edges,
              double x, double y, double z,
              double width, double height, double depth );
void add_sphere( struct matrix * edges,
                 double cx, double cy, double cz,
                 double r, int step );
struct matrix * generate_sphere(double cx, double cy, double cz,
                                double r, int step );
void add_torus( struct matrix * edges,
                double cx, double cy, double cz,
                double r1, double r2, int step );
struct matrix * generate_torus( double cx, double cy, double cz,
                                double r1, double r2, int step );

//2D Curves
void add_circle( struct matrix * edges,
                 double cx, double cy, double cz,
                 double r, int step );
void add_curve( struct matrix *edges,
                double x0, double y0,
                double x1, double y1,
                double x2, double y2,
                double x3, double y3,
                int step, int type );

void add_point( struct matrix * points, double x, double y, double z);
void add_edge( struct matrix * points,
               double x0, double y0, double z0,
               double x1, double y1, double z1);
void draw_lines( struct matrix * points, screen s, color c);
void draw_line(int x0, int y0, int x1, int y1, screen s, color c);

#endif
