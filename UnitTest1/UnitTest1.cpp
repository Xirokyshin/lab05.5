#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.5.cpp"

int find_nth_member(int a1, int d, int n, int& depth);
int sum_of_members(int a1, int d, int n, int& depth);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ArithmeticProgressionTests
{
    TEST_CLASS(ArithmeticProgressionTests)
    {
    public:

        // Тест для знаходження n-го члена прогресії
        TEST_METHOD(TestFindNthMember)
        {
            int depth = 0;
            Assert::AreEqual(1, find_nth_member(1, 1, 1, depth));
            Assert::AreEqual(5, find_nth_member(1, 1, 5, depth));
            Assert::AreEqual(8, find_nth_member(2, 2, 4, depth));
            Assert::AreEqual(20, find_nth_member(10, 5, 3, depth));
        }

        // Тест для знаходження суми перших n членів прогресії
        TEST_METHOD(TestSumOfMembers)
        {
            int depth = 0;
            Assert::AreEqual(1, sum_of_members(1, 1, 1, depth));
            Assert::AreEqual(15, sum_of_members(1, 1, 5, depth));  
            Assert::AreEqual(20, sum_of_members(2, 2, 4, depth));  
            Assert::AreEqual(45, sum_of_members(10, 5, 3, depth));  
        }
    };
}