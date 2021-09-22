#include "gtest/gtest.h"
#include "findInVector.h"


TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

class FindInVectorTest : public ::testing::Test
{
protected:

    std::vector<int> vec;
    std::vector<std::string> vec_of_str;

    FindInVectorTest() 
    {
        vec = { 1, 2, 3 };
        vec_of_str = { "Hello", "Enormous", "World"};
    };
    ~FindInVectorTest() override {};

    void SetUp() override {};
    void TearDown() override {};
};

TEST_F(FindInVectorTest, CheckFirstPositionInt)
{
    EXPECT_EQ(utils::findInVector(vec, 1), 0);
}

TEST_F(FindInVectorTest, CheckSecondPositionInt)
{
    EXPECT_EQ(utils::findInVector(vec, 2), 1);
}

TEST_F(FindInVectorTest, CheckFirstPositionString)
{
    std::string input = "Enormous";

    EXPECT_EQ(utils::findInVector(vec_of_str, input), 1);
}

TEST_F(FindInVectorTest, CheckForNonExistingElement)
{
    EXPECT_NE(utils::findInVector(vec, -1), 0);
}