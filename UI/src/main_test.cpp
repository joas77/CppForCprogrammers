#include <iostream>
#include <functional>
#include <vector>
#include "terminal_test.h"

int main()
{
    std::cout << "testing Terminal based User Interface ..." << std::endl;

    std::vector<std::function<void()>> tests;

    // load tests
    tests.push_back(test_errorMessage);
    tests.push_back(test_termOnlyOneInstance);
    
    for(auto& test : tests)
    {
        test();
    }

    return 0;
}
