// div.c
#include "demo.h"

float division(int a, int b) {
    if (b == 0) {
        return 0.0; // You can handle divide-by-zero error differently if needed
    }
    return (float)a / b;
}
