/**
 * main.h
 * Created on Aug, 23th 2023
 * Author: Tiago Barros
 * Based on "From C to C++ course - 2002"
 */
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "screen.h"
#include "keyboard.h"
#include "timer.h"
#include "telas.h"

int x = 34, y = 12;
int incX = 1, incY = 1;

void iniciarGame()
{
    screenClear();
    screenDrawBorders();

    screenGotoxy(13, 8);
    printf("iniciar jogo");
}

int main()
{
    screenSetColor(WHITE, BLACK);
    telaInicial();
    return 0;
}
