#pragma once


struct Point{
    int row, col;
    Point() : row{0}, col{0} {}
    Point(int r, int c) : row{r}, col{r} {}
    void Offset(int r, int c) { row += r; col += c; }
};

enum class Mode // Pen mode
{
    defPen      = 0x0000,   // predinfined pen
    graphPen    = 0x0100,   // graphical pen
    revsPen     = 0x0200,   // reversed video pen
    charMask    = 0x00FF,   // characters mask
    modeMask    = 0xFF00,   // mode pen mask
};

enum class ErrKind {
    memErr, termErr, sysErr
};