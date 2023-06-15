#pragma once

#include "Common.h"
#include <sys/ioctl.h>
#include <sgtty.h>
#include <signal.h>
#include <string>

class Terminal {
    static sgttyb        ttym;           // original tty mode
    static const int    maxRows = 240;
    static const int    maxCols = 80;
    static int          rows, cols;
    static Terminal*    term;

public:
    Terminal(int rows = maxRows, int cols = maxCols);
    ~Terminal();
    void AlfaPen();
    void GraphPen();
    void Error();
    void PlainPen();
    void Message(const std::string& msg);

};
