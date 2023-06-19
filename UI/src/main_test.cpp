#include <iostream>
#include <functional>
#include <vector>
#include "terminal_test.h"

void printSeparator()
{
    std::cout << "*************************" << std::endl;
}

int main()
{
    std::cout << "testing Terminal based User Interface ..." << std::endl;
    printSeparator();

    std::vector<std::function<void()>> tests;

    // load tests
    tests.push_back(test_errorMessage);
    tests.push_back(test_errorMessageErrorCallback);
    tests.push_back(test_termOnlyOneInstance);
    
    for(auto& test : tests)
    {
        test();
        printSeparator();
    }

    return 0;
}
