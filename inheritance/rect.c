/*============================================================================
* Nama  : Aditiya Saputra
* NIM   : H1A021011
* https://github.com/AditiyaSaputra/TugasSistemEmbeddedPertemuan12.git
============================================================================*/
#include "rect.h"

/* constructor implementation */
void Rectangle_ctor(Rectangle * const me, int16_t x, int16_t y,
                    uint16_t width, uint16_t height)
{
    /* first call superclass� ctor */
    Shape_ctor(&me->super, x, y);

    /* next, you initialize the attributes added by this subclass... */
    me->width = width;
    me->height = height;
}
