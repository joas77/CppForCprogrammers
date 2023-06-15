#include "terminal.h"
#include <iostream>

int main()
{
    Terminal term;
    std::cout << "testing Terminal based User Interface ..." << std::endl;
    term.Message("Testing terminal...");
    return 0;
}
