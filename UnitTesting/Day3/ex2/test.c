#include "unity.h"
#include "demo.h"

void setUp(void) {}
void tearDown(void) {}

void test_even_number(void) {
    TEST_ASSERT_TRUE(is_even(4));       // 4 is even
    TEST_ASSERT_FALSE(is_even(5));      // 5 is odd
}

void test_not_equal(void) {
    TEST_ASSERT_NOT_EQUAL(0, is_even(8));  // Should not be 0 (even)
}

void test_greater_less(void) {
    int result_even = is_even(10); // 1
    int result_odd = is_even(7);   // 0

    TEST_ASSERT_GREATER_THAN(0, result_even);
    TEST_ASSERT_GREATER_OR_EQUAL(1, result_even);
    TEST_ASSERT_LESS_THAN(1, result_odd);
    TEST_ASSERT_LESS_OR_EQUAL(0, result_odd);
}
