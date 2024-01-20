#include <stdio.h>

int main(void)
{
    // any difference from printf to print?
    // there is no print function defined in stdio.h
    // compiling error
    // error: 'print' was not declared in this scope; did you mean 'printf'?
    print("Hello World!\n");
    return 0;
}