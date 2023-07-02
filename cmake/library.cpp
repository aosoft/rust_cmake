#include "library.h"

#include <iostream>

#ifdef __cplusplus
extern "C" {
#endif

int sum(int a, int b)
{
    return a + b;
}

#ifdef __cplusplus
}
#endif
