/*#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED


// GLOBAL.H

// Ancho y alto de la pantalla
const int PANTALLA_ANCHO = 1280;
const int PANTALLA_ALTO  = 720;

// En este BITMAP dibujaremos todo
BITMAP *buffer;
// es el espacio en pixel que recorre el jugador al andar
const int desplazamiento=4;

// Copiar el buffer a la pantalla del juego (screen)
void pintar_pantalla()
{
    blit(buffer, screen, 0, 0, 0, 0, PANTALLA_ANCHO, PANTALLA_ALTO);
}


#endif // GLOBAL_H_INCLUDED
*/