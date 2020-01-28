#include "gtest/gtest.h"
#include "chop.h"

TEST(ChopTest, OneElementArrayValueExists)
{
    int one_element_1[] = {1};
    EXPECT_EQ( chop(one_element_1[0], one_element_1, sizeof(one_element_1)/sizeof(int)), 0);
}

TEST(ChopTest, NoElementArray)
{
    int empty_array[] = {};
    EXPECT_EQ( chop( 1, empty_array, sizeof(empty_array)/sizeof(int)), -1);

}

TEST(ChopTest, TwoElementArrayValueExists)
{
    int two_element[] = { 1 , 2 };
    EXPECT_EQ( chop( two_element[0], two_element, sizeof(two_element)/sizeof(int)), 0);
    EXPECT_EQ( chop( two_element[1], two_element, sizeof(two_element)/sizeof(int)), 1);
}

TEST(ChopTest, OddArrayValueExists)
{
    int odd_array[] = { 1, 2, 3, 4, 5};
    EXPECT_EQ( chop( odd_array[0], odd_array, sizeof(odd_array)/sizeof(int)), 0);
    EXPECT_EQ( chop( odd_array[1], odd_array, sizeof(odd_array)/sizeof(int)), 1);
    EXPECT_EQ( chop( odd_array[2], odd_array, sizeof(odd_array)/sizeof(int)), 2);
    EXPECT_EQ( chop( odd_array[3], odd_array, sizeof(odd_array)/sizeof(int)), 3);
    EXPECT_EQ( chop( odd_array[4], odd_array, sizeof(odd_array)/sizeof(int)), 4);
}

TEST(ChopTest, EvenArrayValueExists)
{
    int even_array[] = { 1, 2, 3, 4, 5, 6};
    EXPECT_EQ( chop( even_array[0], even_array, sizeof(even_array)/sizeof(int)), 0);
    EXPECT_EQ( chop( even_array[1], even_array, sizeof(even_array)/sizeof(int)), 1);
    EXPECT_EQ( chop( even_array[2], even_array, sizeof(even_array)/sizeof(int)), 2);
    EXPECT_EQ( chop( even_array[3], even_array, sizeof(even_array)/sizeof(int)), 3);
    EXPECT_EQ( chop( even_array[4], even_array, sizeof(even_array)/sizeof(int)), 4);
    EXPECT_EQ( chop( even_array[5], even_array, sizeof(even_array)/sizeof(int)), 5);
}

TEST(ChopTest, ValueDoesNotExist)
{
    int even_array[] = { 1, 2, 4, 5, 7, 9};
    EXPECT_EQ( chop( 0, even_array, sizeof(even_array)/sizeof(int)), -1);
    EXPECT_EQ( chop( 3, even_array, sizeof(even_array)/sizeof(int)), -1);
    EXPECT_EQ( chop( 10, even_array, sizeof(even_array)/sizeof(int)), -1);
}
