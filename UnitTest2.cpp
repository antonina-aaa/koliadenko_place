#include "pch.h"
#include "CppUnitTest.h"
#include "vector.26.03.2026.h" 
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BoundaryTestsNamespace
{
    TEST_CLASS(BoundaryTestsClass)
    {
    public:

        // --- Позитивні тести ---

        TEST_METHOD(TestSumVector)
        {
            std::vector<double> v = { 1.5, 2.5, 3.0 };
            double result = sumVector(v);

            Assert::AreEqual(7.0, result, 0.0001);
        }

        TEST_METHOD(TestSortAsc)
        {
            std::vector<double> v = { 5.2, 1.1, 3.3 };
            std::vector<double> expected = { 1.1, 3.3, 5.2 };

            sortAsc(v);

            for (size_t i = 0; i < v.size(); i++) {
                Assert::AreEqual(expected[i], v[i], 0.0001);
            }
        }

        TEST_METHOD(TestSortDesc)
        {
            std::vector<double> v = { 1.1, 3.3, 2.2 };
            std::vector<double> expected = { 3.3, 2.2, 1.1 };

            sortDesc(v);

            for (size_t i = 0; i < v.size(); i++) {
                Assert::AreEqual(expected[i], v[i], 0.0001);
            }
        }

        TEST_METHOD(TestCountDuplicates)
        {
            std::vector<double> v = { 1, 2, 2, 3, 3 };

            int result = countDuplicates(v);

            Assert::AreEqual(2, result);
        }

        // --- Граничні та негативні ---

        TEST_METHOD(TestEmptyVectorSum)
        {
            std::vector<double> v;

            double result = sumVector(v);

            Assert::AreEqual(0.0, result, 0.0001);
        }

        TEST_METHOD(TestNegativeNumbersSum)
        {
            std::vector<double> v = { -10.0, -5.0, 5.0 };

            double result = sumVector(v);

            Assert::AreEqual(-10.0, result, 0.0001);
        }

        TEST_METHOD(TestSumIncorrectResult)
        {
            std::vector<double> v = { 10, 20 };

            double result = sumVector(v);

            Assert::AreNotEqual(50.0, result, 0.0001);
        }

        TEST_METHOD(TestRemoveDuplicatesNone)
        {
            std::vector<double> v = { 1.1, 2.2, 3.3 };
            std::vector<double> unique;

            removeDuplicates(v, unique);

            Assert::AreEqual((int)v.size(), (int)unique.size());
        }

        TEST_METHOD(TestRemoveDuplicates)
        {
            std::vector<double> v = { 1, 2, 2, 3 };
            std::vector<double> unique;

            removeDuplicates(v, unique);

            Assert::AreEqual(3, (int)unique.size());
        }

        TEST_METHOD(TestSortAllIdentical)
        {
            std::vector<double> v = { 5.0, 5.0, 5.0 };

            sortAsc(v);

            for (size_t i = 0; i < v.size(); i++) {
                Assert::AreEqual(5.0, v[i], 0.0001);
            }
        }
    };
}