#include "unity.h"
#include "calculator.h"

void setUp(void){}

void tearDown(void){}

void test_add_positive_numbers(void){
    TEST_ASSERT_EQUAL(5, add(2, 3));
}

void test_add_positive_and_negative_numbers(void){
    TEST_ASSERT_EQUAL(1, add(5, -4));
}

void test_add_negative_numbers(void){
    TEST_ASSERT_EQUAL(-7, add(-3,-4));
}

void test_add_zero(void){
    TEST_ASSERT_EQUAL(10, add(10, 0));
    TEST_ASSERT_EQUAL(0, add(0, 0));
}

void test_subtract_positive_numbers(void){
    TEST_ASSERT_EQUAL(6, subtract(10,4));
    TEST_ASSERT_EQUAL(-1, subtract(6,7));
}

void test_subtract_negative_numbers(void){
    TEST_ASSERT_EQUAL(-3, subtract(-5,-2));
    TEST_ASSERT_EQUAL(2, subtract(-3,-5));
}

void test_subtract_positive_and_negative_numbers(void){
    TEST_ASSERT_EQUAL(10, subtract(7, -3));
    TEST_ASSERT_EQUAL(-5, subtract(-1, 4));
}

void test_subtract_zero(void){
    TEST_ASSERT_EQUAL(0, subtract(0, 0));
    TEST_ASSERT_EQUAL(10, subtract(10, 0));
    TEST_ASSERT_EQUAL(-10, subtract(0, 10));
}

void test_multiply_positive_numbers(void){
    TEST_ASSERT_EQUAL(48, multiply(6, 8));
}

void test_multiply_negative_numbers(void){
    TEST_ASSERT_EQUAL(36, multiply(-4, -9));
}

void test_multiply_positive_and_negative_numbers(void){
    TEST_ASSERT_EQUAL(-16, multiply(-8, 2));
}

void test_multiply_zero(void){
    TEST_ASSERT_EQUAL(0, multiply(10, 0));
    TEST_ASSERT_EQUAL(0, multiply(0, 0));
}

void test_divide_positive_numbers(void){
    TEST_ASSERT_EQUAL(2, divide(5, 2));
    TEST_ASSERT_EQUAL(3, divide(12, 4));
    TEST_ASSERT_EQUAL(0, divide(2, 4));
}

void test_divide_negative_numbers(void){
    TEST_ASSERT_EQUAL(4, divide(-20, -5));
    TEST_ASSERT_EQUAL(5, divide(-35, -7));
    TEST_ASSERT_EQUAL(0, divide(-5, -6));
}

void test_divide_positive_and_negative_numbers(void){
    TEST_ASSERT_EQUAL(-3, divide(-10, 3));
    TEST_ASSERT_EQUAL(-6, divide(13, -2));
    TEST_ASSERT_EQUAL(0, divide(-1, 3));
}

void test_divide_zero(void){
    TEST_ASSERT_EQUAL(0, divide(0, -6));
    TEST_ASSERT_EQUAL(0, divide(0, 2));
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_add_positive_numbers);
    RUN_TEST(test_add_positive_and_negative_numbers);
    RUN_TEST(test_add_negative_numbers);
    RUN_TEST(test_add_zero);
    RUN_TEST(test_subtract_positive_numbers);
    RUN_TEST(test_subtract_negative_numbers);
    RUN_TEST(test_subtract_positive_and_negative_numbers);
    RUN_TEST(test_subtract_zero);
    RUN_TEST(test_multiply_positive_numbers);
    RUN_TEST(test_multiply_negative_numbers);
    RUN_TEST(test_multiply_positive_and_negative_numbers);
    RUN_TEST(test_multiply_zero);
    RUN_TEST(test_divide_positive_numbers);
    RUN_TEST(test_divide_negative_numbers);
    RUN_TEST(test_divide_zero);
    return UNITY_END();
}
