#pragma once

#include "Common.h"
#include <sys/ioctl.h>
#include <sgtty.h>
#include <signal.h>
#include <string>

class Terminal {
private:
    static sgttyb        ttym;           // original tty mode
    static const int    maxRows = 240;
    static const int    maxCols = 80;
    static int          rows, cols;
    static Terminal*    term;
    ErrFun              errFun;         // User defined error function
    //char   termBuf[bufSize];

    void WriteCode(const std::string_view code);
    void Interrupt();

public:
    Terminal(int rows = maxRows, int cols = maxCols);
    ~Terminal();
    void AlfaPen();
    void DefaultPen()                               { WriteCode(defCode); }
    void Error(ErrKind err, const std::string& msg);
    void SetErrorFun(ErrFun ef)                     { errFun = ef; }
    void GraphPen();
    void PlainPen();
    void Message(const std::string& msg);

};
