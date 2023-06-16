#include "terminal_test.h"
#include "terminal.h"

Terminal term;

void test_errorMessage(){
    term.Error(ErrKind::sysErr, "Testing error msg, system error");  
}

void test_termOnlyOneInstance()
{
    Terminal term2;
}