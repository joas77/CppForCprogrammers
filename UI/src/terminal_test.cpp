#include <iostream>
#include "terminal_test.h"
#include "terminal.h"

Terminal term;

void test_errorMessage(){
    term.Error(ErrKind::sysErr, "Testing error msg, system error");  
}

void test_errorMessageErrorCallback()
{
    term.SetErrorFun([](ErrKind err, const std::string& msg){
        std::cout  << "User defined error function MSG: " << msg << " [ERRORTYPE]: " << static_cast<int>(err) << std::endl;
    } );

    term.Error(ErrKind::termErr, "Testing user defined function");
}

void test_termOnlyOneInstance()
{
    Terminal term2;
}