// main.c
#include <stdio.h>
#include "demo.h"
#include "unity.h"

void setUp(){}
void tearDown(){}
void test_pos(){
    TEST_ASSERT_EQUAL(3,sum(1,2));
    TEST_ASSERT_EQUAL(7,sum(1,6));
}

int main() {
    int a = 10, b = 5;

    printf("Sum = %d\n", sum(a, b));
    printf("Product = %d\n", product(a, b));
    printf("Square of a = %d\n", square(a));
    printf("Difference = %d\n", difference(a, b));
    printf("Division = %.2f\n", division(a, b));

    UNITY_BEGIN();
    RUN_TEST(test_pos);

    return UNITY_END() ;
}
