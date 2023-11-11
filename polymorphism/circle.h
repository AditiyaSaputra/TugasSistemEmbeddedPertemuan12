/*============================================================================
* Nama  : Aditiya Saputra
* NIM   : H1A021011
* https://github.com/AditiyaSaputra/TugasSistemEmbeddedPertemuan12.git
============================================================================*/
#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h" /* the base class interface */

typedef struct {
    Shape super; /* <== inherits Shape */

    /* attributes added by this subclass... */
    uint16_t rad;
} Circle;

/* constructor */
void Circle_ctor(Circle * const me, int16_t x, int16_t y,
                 uint16_t rad);

#endif /* CIRCLE_H */
