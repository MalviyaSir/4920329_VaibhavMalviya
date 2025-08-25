#include "unity.h"

// Declare test functions from test.c
void test_even_number(void);
void test_not_equal(void);
void test_greater_less(void);

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_even_number);
    RUN_TEST(test_not_equal);
    RUN_TEST(test_greater_less);

    return UNITY_END();
}
