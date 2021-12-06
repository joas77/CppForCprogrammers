#pragma once

#include "Common.h"

class Terminal {
private:
    static sgttyb   ttym;   //original TTY mode
    const maxRows = 240;
    const maxCols = 80;

public:
    Terminal(int rows = maxRows, int cols = maxCols);
    void AlfaPen();
    void GraphPen();
    void PlainPen();

}
