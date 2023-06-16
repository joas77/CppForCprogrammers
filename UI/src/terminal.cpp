#include <iostream>
#include "terminal.h"

Terminal* Terminal::term = nullptr;
int Terminal::rows = maxRows;
int Terminal::cols = maxCols;

Terminal::Terminal(int rows, int cols)
{
    if(term)
    {
        Error(ErrKind::termErr, "in Terminal");
    }

    term = this;
    Terminal::rows = rows = (rows <= 0 || rows > maxRows ? maxRows : rows);
    Terminal::cols = cols = (cols <= 0 || cols > maxCols ? maxCols : cols);
}

Terminal::~Terminal()
{
    std::cout << "[DEBUG]: called Terminal destructor" << std::endl; 
}

void Terminal::Error(ErrKind err, const std::string& msg)
{
    std::cerr << msg <<std::endl;
}

void Terminal::Message(const std::string& msg)
{
    // Point pt;
    // Mode mode;
    // int lastRow = rows;
    // curWind->GetPos(&pt);
}