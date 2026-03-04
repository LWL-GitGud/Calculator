#include "unity.h"
#include "calculator.h"

void setUp(void){
    // Initialize any resources needed for your tests here
    // For example, you might reset a global value, dynamically allocate memory, etc.
    // In this example, we do not need anything here.
}

void tearDown(void){
    // Initialize any resources needed for your tests here
    // For example, you might reset a global value, dynamically allocate memory, etc.
    // In this example, we do not need anything here.
}

void test_add_positive_numbers(void){
    TEST_ASSERT_EQUAL(5, add(2,3));
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_add_positive_numbers);
    return UNITY_END();
}