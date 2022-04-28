/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

/* Test for count_starting_repeats() */
TEST(PracticeTest, repeating_zzz_test)
{
	Practice testObj;

    ASSERT_EQ(testObj.count_starting_repeats("zzz123"), 3);
}

TEST(PracticeTest, one_z_test)
{
	Practice testObj;

    ASSERT_EQ(testObj.count_starting_repeats("z123"), 1);
}

TEST(PracticeTest, no_zzz_test)
{
	Practice testObj;

    ASSERT_EQ(testObj.count_starting_repeats(""), 0);
}

/* Test for is_palindrome() */
TEST(PracticeTest, palindrome_true_test)
{
	Practice testObj;

    ASSERT_TRUE(testObj.isPalindrome("racecar"));
}

TEST(PracticeTest, palindrome_false_test)
{
	Practice testObj;

    ASSERT_FALSE(testObj.isPalindrome("spaceship"));
}

TEST(PracticeTest, palindrome_none_test)
{
	Practice testObj;

    ASSERT_FALSE(testObj.isPalindrome(""));
}

/* Test for sortDescending() */
TEST(PracticeTest, sort_desc_test)
{
	Practice testObj;
	int arr[3] = {1, 5, 3};
	int answer[3] = {5, 3, 1};
	testObj.sortDescending(arr[0], arr[1], arr[2]);
    ASSERT_EQ(arr[0], answer[0]);
	ASSERT_EQ(arr[1], answer[1]);
	ASSERT_EQ(arr[2], answer[2]);
}

TEST(PracticeTest, sort_desc_with_negatives_test)
{
	Practice testObj;
	int arr[3] = {5, -1, 3};
	int answer[3] = {5, 3, -1};
	testObj.sortDescending(arr[0], arr[1], arr[2]);
    ASSERT_EQ(arr[0], answer[0]);
	ASSERT_EQ(arr[1], answer[1]);
	ASSERT_EQ(arr[2], answer[2]);
}
