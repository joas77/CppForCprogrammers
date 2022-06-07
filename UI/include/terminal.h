#pragma once

#include "Common.h"

class Terminal {
private:
    //static sgttyb   ttym;   //original TTY mode
    static const int maxRows = 240;
    static const int maxCols = 80;

public:
    //Terminal(int rows = maxRows, int cols = maxCols);
    Terminal();
    void AlfaPen();
    void GraphPen();
    void PlainPen();

};
