/**
 * @file test_calculation.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "unity.h"
#include "calculation.h"

#define PROJECT_NAME "CALCULATOR"
void setUp()
{

}
void tearDown()
{

}

void test_sum(void) 
{
    TEST_ASSERT_EQUAL(30, sum(10, 20));
}
void test_difference(void) 
{
    TEST_ASSERT_EQUAL(-10, difference(10, 20));
}
void test_multiply(void) 
{
  TEST_ASSERT_EQUAL(200, multiply(10, 20));
}
void test_divide(void) 
{
  TEST_ASSERT_EQUAL(0.5, divide(10, 20));
  TEST_ASSERT_EQUAL(-0.5, divide(10, -20));
}
void test_factorial(void) 
{
  TEST_ASSERT_EQUAL(6, factorial(3));
  TEST_ASSERT_EQUAL(1, factorial(0));
}
void test_permutation(void) 
{
  TEST_ASSERT_EQUAL(10, permutation(10));
}
void test_combination(void) 
{
  TEST_ASSERT_EQUAL(10, combination(10));
}
void test_logarithm(void) 
{
  TEST_ASSERT_EQUAL(2.30, logarithm(10));
  TEST_ASSERT_EQUAL(0, logarithm(1));
}
void test_sine(void) 
{
  TEST_ASSERT_EQUAL(0.003, sine(10));
  TEST_ASSERT_EQUAL(0.006, sine(20));
}
void test_cosine(void) 
{
  TEST_ASSERT_EQUAL(0.999, cosine(10));
  TEST_ASSERT_EQUAL(0.999, cosine(20));
}
void test_tangent(void) 
{
  TEST_ASSERT_EQUAL(0.003, tangent(10));
  TEST_ASSERT_EQUAL(0.006, tangent(10));
}
int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_sum);
    RUN_TEST(test_difference);
    RUN_TEST(test_multiply);
    RUN_TEST(test_divide);
    RUN_TEST(test_factorial);
    RUN_TEST(test_permutation);
    RUN_TEST(test_combination);
    RUN_TEST(test_logarithm);
    RUN_TEST(test_sine);
    RUN_TEST(test_cosine);
    RUN_TEST(test_tangent);

  return UNITY_END();
}