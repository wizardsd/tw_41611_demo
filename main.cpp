#include "tw_41611_submodule/demo_header.h"

#include <stdio.h>

int main(int argc, char* argv[])
{
    const int demo_result = demo_func();
    if(demo_result == 1)
        printf("Old submodule. Result: %i\n", demo_result);
    else if(demo_result == 2)
        printf("Expected submodule. Result: %i\n", demo_result);
    else
        printf("Unexpected result. Result: %i\n", demo_result);

    return demo_result;
}
